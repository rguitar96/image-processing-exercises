#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{
    if (argc != 4)
    {
        printf("usage: ./exercise2d_inf <first_image_path> <second_image_path> <output_path>\n");
        return -1;
    }

    Mat first_image;
    Mat second_image;
    Mat output_image;

    first_image = imread(argv[1], cv::IMREAD_GRAYSCALE);
    second_image = imread(argv[2], cv::IMREAD_GRAYSCALE);

    output_image = first_image.clone();

    if (!first_image.data || !second_image.data)
    {
        printf("No image data \n");
        return -1;
    }
    
    for (int i = 0; i < first_image.rows; i++)
    {
        for (int j = 0; j < first_image.cols; j++)
        {
            output_image.at<uchar>(i,j) = min(first_image.at<uchar>(i,j), second_image.at<uchar>(i,j));
        }
    }

    namedWindow("Output Image", WINDOW_AUTOSIZE );
    imshow("Output Image", output_image);

    waitKey(0);

    imwrite(argv[3], output_image);

    return 0;
}