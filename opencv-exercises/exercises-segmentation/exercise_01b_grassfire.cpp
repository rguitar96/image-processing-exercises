#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <vector>
#include <cmath>

enum CONNECT_TYPE
{
    CONNECT_4 = 0,
    CONNECT_8 = 1
};

void dfs(cv::Mat img, std::vector<std::vector<int>> &rv, int r, int c, int reg, CONNECT_TYPE con)
{
    if (r < 0 || r == img.rows) return;
    if (c < 0 || c == img.cols) return;
    if (rv.at(r).at(c) != -1 || img.at<uchar>(r,c) == 0) return;

    rv.at(r).at(c) = reg;

    dfs(img, rv, r-1, c, reg, con);
    dfs(img, rv, r+1, c, reg, con);
    dfs(img, rv, r, c-1, reg, con);
    dfs(img, rv, r, c+1, reg, con);

    if (con == CONNECT_8)
    {
        dfs(img, rv, r-1, c-1, reg, con);
        dfs(img, rv, r+1, c-1, reg, con);
        dfs(img, rv, r-1, c+1, reg, con);
        dfs(img, rv, r+1, c+1, reg, con);
    }
}

int main(int argc, char** argv )
{
    if (argc != 4)
    {
        printf("usage: ./exercise_01b_grassfire <connectivity_type (0 for 4-type, 1 for 8-type)> <input_path> <output_path>\n");
        return -1;
    }

    CONNECT_TYPE connectivity = CONNECT_4;
    
    std::istringstream ss(argv[1]);
    int value;
    if (!(ss >> value)) {
        std::cerr << "Invalid number: " << argv[1] << '\n';
        return -1;
    } else if (!ss.eof()) {
        std::cerr << "Trailing characters after number: " << argv[1] << '\n';
        return -1;
    }

    if (value != 0 && value != 1)
    {
        std::cerr << "Invalid connectivity, using default 4-connectivity.\n";
    } else
    {
        connectivity = CONNECT_TYPE(value);
    }
    

    cv::Mat input_image;

    input_image = imread(argv[2], cv::IMREAD_GRAYSCALE);

    cv::Mat output_image = imread(argv[2], cv::IMREAD_COLOR);

    if (!input_image.data)
    {
        printf("No image data \n");
        return -1;
    }

    std::vector<std::vector<int>> region_vector(input_image.cols, std::vector<int> (input_image.rows, -1));

    int next_region = 0;
    for (int row = 0; row < input_image.rows; row++)
    {
        for (int col = 0; col < input_image.cols; col++)
        {
            if (region_vector.at(row).at(col) == -1 && input_image.at<uchar>(row,col) > 0) 
            {
                dfs(input_image, region_vector, row, col, next_region, connectivity);
                next_region++;
            }
        }
    }

    std::vector<cv::Vec3b> color_vector(next_region, cv::Vec3b(0,0,0));

    cv::RNG rng(101);
    for (int r = 0; r < (next_region-1); r++)
    {
        color_vector.at(r) = cv::Vec3b(rng.uniform(0,255), rng.uniform(0, 255), rng.uniform(0, 255));
    }

    for (int i = 0; i < input_image.rows; i++)
    {
        for (int j = 0; j < input_image.cols; j++)
        {
            if (region_vector.at(i).at(j) >= 0)
            {
                output_image.at<cv::Vec3b>(i,j) = color_vector.at(region_vector.at(i).at(j));
            }
        }
    }

    printf("There are %d regions.\n", next_region-1);    

    cv::namedWindow("Output Image", cv::WINDOW_AUTOSIZE);
    imshow("Output Image", output_image);

    cv::waitKey(0);

    imwrite(argv[3], output_image);

    return 0;
}