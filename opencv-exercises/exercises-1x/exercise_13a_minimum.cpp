#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <fstream>

enum CONNECT_TYPE
{
    CONNECT_4 = 0,
    CONNECT_8 = 1
};

bool is_minimum_flat_zone(cv::Mat img, cv::Mat &output_image, int x, int y, int value, int label, CONNECT_TYPE con)
{
    // out of limits
    if (x < 0 || x == img.rows) return true;
    if (y < 0 || y == img.cols) return true;

    // already visited pixel
    if (output_image.at<uchar>(x,y) == label) return true;

    // not part of the flat zone
    if (img.at<uchar>(x,y) < value) return false;
    if (img.at<uchar>(x,y) > value) return true;

    // unvisited pixel of the flat zone (img(x,y)==value && output(x,y) != label)
    output_image.at<uchar>(x,y) = label;

    bool is_minimum = 
    is_minimum_flat_zone(img, output_image, x-1, y, value, label, con) &&
    is_minimum_flat_zone(img, output_image, x+1, y, value, label, con) &&
    is_minimum_flat_zone(img, output_image, x, y-1, value, label, con) &&
    is_minimum_flat_zone(img, output_image, x, y+1, value, label, con);

    if (con == CONNECT_8)
    {
        is_minimum = is_minimum &&
        is_minimum_flat_zone(img, output_image, x-1, y-1, value, label, con) &&
        is_minimum_flat_zone(img, output_image, x+1, y-1, value, label, con) &&
        is_minimum_flat_zone(img, output_image, x-1, y+1, value, label, con) &&
        is_minimum_flat_zone(img, output_image, x+1, y+1, value, label, con);
    }

    return is_minimum;
}

int main(int argc, char** argv )
{
    if (argc != 4)
    {
        printf("usage: ./exercise_13a_minimum <input_txt_path> <input_image_path> <output_image_path>\n");
        return -1;
    }

    int x = 0;
    int y = 0;
    CONNECT_TYPE connectivity = CONNECT_4;
    int label = 1;

    std::ifstream file(argv[1]);
    std::string str;
    
    bool error = false;
    
    error = !std::getline(file, str) || false;
    x = std::stoi(str);
    error = !std::getline(file, str) || false;
    y = std::stoi(str);
    error = !std::getline(file, str) || false;
    connectivity = std::stoi(str) == 8 ? CONNECT_8 : CONNECT_4;
    error = !std::getline(file, str) || false;
    label = std::stoi(str);
    
    if (error)
    {
        printf("Invalid text file\n");
        return -1;
    }

    printf("Input file values: x=%d, y=%d, connectivity=%d, label=%d\n", x, y, connectivity, label);
    
    cv::Mat input_image;

    input_image = imread(argv[2], cv::IMREAD_GRAYSCALE);

    cv::Mat output_image = cv::Mat::zeros(input_image.size(), CV_8UC1);

    if (!input_image.data)
    {
        printf("No image data \n");
        return -1;
    }

    bool is_minimum = is_minimum_flat_zone(input_image, output_image, x, y, input_image.at<uchar>(x,y), label, connectivity);

    printf("%s\n", is_minimum ? "true" : "false");

    cv::namedWindow("Output Image", cv::WINDOW_AUTOSIZE);
    imshow("Output Image", output_image);

    cv::waitKey(0);

    imwrite(argv[3], output_image);

    return 0;
}