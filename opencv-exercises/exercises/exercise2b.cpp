#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{
    if (argc != 3)
    {
        printf("usage: ./exercise2b <first_image_path> <second_image_path>\n");
        return -1;
    }

    Mat first_image;
    Mat second_image;

    first_image = imread(argv[1], cv::IMREAD_GRAYSCALE);
    second_image = imread(argv[2], cv::IMREAD_GRAYSCALE);

    if (!first_image.data || !second_image.data)
    {
        printf("No image data \n");
        return -1;
    }

    bool equal = true;

    if (first_image.size() != second_image.size())
    {
        printf("Images have different dimensions \n");
        equal = false;
    }

    if (equal)
    {
        for (int i = 0; i < first_image.rows; i++)
        {
            for (int j = 0; j < first_image.cols; j++)
            {
                if (first_image.at<uchar>(i,j) != second_image.at<uchar>(i,j))
                {
                    equal = false;
                }
            }
        }
    }

    equal ? printf("Images are equal!\n") : printf("Images are not equal!\n");
    
    return 0;
}