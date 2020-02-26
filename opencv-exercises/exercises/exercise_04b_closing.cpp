#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "libraries/ImageUtilities/image_utilities.hpp"

int main(int argc, char** argv )
{
    if (argc != 4)
    {
        printf("usage: ./exercise4b_closing <i> <input_path> <output_path>\n");
        return -1;
    }

    std::istringstream ss(argv[1]);
    int value;
    if (!(ss >> value)) {
        std::cerr << "Invalid number: " << argv[1] << '\n';
        return -1;
    } else if (!ss.eof()) {
        std::cerr << "Trailing characters after number: " << argv[1] << '\n';
        return -1;
    }

    cv::Mat input_image;
    cv::Mat output_image;

    input_image = imread(argv[2], cv::IMREAD_GRAYSCALE);


    if (!input_image.data)
    {
        printf("No image data \n");
        return -1;
    }

    output_image = compute_closing(input_image, value);

    cv::namedWindow("Output Image", cv::WINDOW_AUTOSIZE);
    imshow("Output Image", output_image);

    cv::waitKey(0);

    imwrite(argv[3], output_image);

    return 0;
}