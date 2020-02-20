#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{
    if (argc != 4)
    {
        printf("usage: ./exercise2a <input_path> <threshold> <output_path>\n");
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

    input_image = imread( argv[1], 1 );

    if (!input_image.data)
    {
        printf("No image data \n");
        return -1;
    }

    threshold(input_image, output_image, 100, 255, THRESH_BINARY);

    namedWindow("Output Image", WINDOW_AUTOSIZE );
    imshow("Output Image", output_image);

    waitKey(0);

    imwrite(argv[3], output_image);

    return 0;
}