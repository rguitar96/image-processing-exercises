#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "libraries/ImageUtilities/image_utilities.hpp"

int main(int argc, char** argv )
{
    if (argc != 4)
    {
        printf("usage: ./exercise2d_sup <first_image_path> <second_image_path> <output_path>\n");
        return -1;
    }

    cv::Mat first_image;
    cv::Mat second_image;
    cv::Mat output_image;

    first_image = imread(argv[1], cv::IMREAD_GRAYSCALE);
    second_image = imread(argv[2], cv::IMREAD_GRAYSCALE);

    if (!first_image.data || !second_image.data)
    {
        printf("No image data \n");
        return -1;
    }
    
    output_image = compute_supremum(first_image, second_image);

    cv::namedWindow("Output Image", cv::WINDOW_AUTOSIZE);
    imshow("Output Image", output_image);

    cv::waitKey(0);

    imwrite(argv[3], output_image);

    return 0;
}