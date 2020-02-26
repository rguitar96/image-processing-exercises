#include <stdio.h>
#include <iostream>
#include <fstream>
#include <opencv2/opencv.hpp>
#include "libraries/ImageUtilities/image_utilities.hpp"

int main(int argc, char** argv )
{
    if (argc != 3)
    {
        printf("usage: ./exercise_02b_compare <first_image_path> <second_image_path>\n");
        return -1;
    }

    cv::Mat first_image;
    cv::Mat second_image;

    first_image = imread(argv[1], cv::IMREAD_GRAYSCALE);
    second_image = imread(argv[2], cv::IMREAD_GRAYSCALE);

    if (!first_image.data || !second_image.data)
    {
        printf("No image data \n");
        return -1;
    }

    std::ofstream myfile;
    myfile.open ("exercise_02b_output.txt");
    myfile << (compare_images(first_image, second_image) ? "=" : "!=") << "\n";
    myfile.close();
    return 0;
}