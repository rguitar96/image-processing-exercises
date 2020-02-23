#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{
    if (argc != 4)
    {
        printf("usage: ./exercise3a_erosion <input_path> <i> <output_path>\n");
        return -1;
    }

    std::istringstream ss(argv[2]);
    int value;
    if (!(ss >> value)) {
        std::cerr << "Invalid number: " << argv[2] << '\n';
        return -1;
    } else if (!ss.eof()) {
        std::cerr << "Trailing characters after number: " << argv[2] << '\n';
        return -1;
    }

    Mat input_image;
    Mat output_image;

    input_image = imread(argv[1], cv::IMREAD_GRAYSCALE);

    output_image = input_image.clone();

    if (!input_image.data)
    {
        printf("No image data \n");
        return -1;
    }
    
    for (int i = 0; i < input_image.rows; i++)
    {
        for (int j = 0; j < input_image.cols; j++)
        {
            uchar max = 0;
            for (int h = -value; h < value; h++)
            {
                for (int w = -value; w < value; w++)
                {
                    if (input_image.at<uchar>(i+h,j+w) > max) max = input_image.at<uchar>(i+h,j+w);
                }
            }
            output_image.at<uchar>(i,j) = max;
        }
    }

    namedWindow("Output Image", WINDOW_AUTOSIZE );
    imshow("Output Image", output_image);

    waitKey(0);

    imwrite(argv[3], output_image);

    return 0;
}