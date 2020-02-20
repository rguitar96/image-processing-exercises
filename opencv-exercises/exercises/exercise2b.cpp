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

    first_image = imread( argv[1], 1 );
    second_image = imread( argv[2], 1 );

    if (!first_image.data || !second_image.data)
    {
        printf("No image data \n");
        return -1;
    }

    if (first_image.size() != second_image.size())
    {
        printf("Images have different dimensions \n");
        return -1;
    }

    Scalar s = sum(first_image - second_image);

    if (s[0]==0 && s[1]==0 && s[2]==0)
    {
        printf("Images are the same! \n");
    }
    else
    {
        printf("Images are not the same :( \n");
    }
    

    return 0;
}