#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <fstream>

enum CONNECT_TYPE
{
    CONNECT_4 = 0,
    CONNECT_8 = 1
};

void flat_zone(cv::Mat img, cv::Mat &output_image, int x, int y, int value, int label, CONNECT_TYPE con)
{
    if (x < 0 || x == img.rows) return;
    if (y < 0 || y == img.cols) return;
    if (output_image.at<uchar>(x,y) == label || img.at<uchar>(x,y) != value) return;

    output_image.at<uchar>(x,y) = label;

    flat_zone(img, output_image, x-1, y, value, label, con);
    flat_zone(img, output_image, x+1, y, value, label, con);
    flat_zone(img, output_image, x, y-1, value, label, con);
    flat_zone(img, output_image, x, y+1, value, label, con);

    if (con == CONNECT_8)
    {
        flat_zone(img, output_image, x-1, y-1, value, label, con);
        flat_zone(img, output_image, x+1, y-1, value, label, con);
        flat_zone(img, output_image, x-1, y+1, value, label, con);
        flat_zone(img, output_image, x+1, y+1, value, label, con);
    }
}

int main(int argc, char** argv )
{
    if (argc != 4)
    {
        printf("usage: ./exercise_11a_flatzone <input_txt_path> <input_image_path> <output_image_path>\n");
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

    flat_zone(input_image, output_image, x, y, input_image.at<uchar>(x,y), label, connectivity);

    cv::namedWindow("Output Image", cv::WINDOW_AUTOSIZE);
    imshow("Output Image", output_image);

    cv::waitKey(0);

    imwrite(argv[3], output_image);

    return 0;
}