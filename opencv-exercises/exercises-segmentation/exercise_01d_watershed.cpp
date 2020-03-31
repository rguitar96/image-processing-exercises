#include <stdio.h>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv )
{
    if (argc != 4)
    {
        printf("usage: ./exercise_01d_watershed <i> <input_path> <output_path>\n");
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

    if (value != 10)
    {
        std::cerr << "[WARNING]: Optimal results achieved with i = 10." << "\n";
    }

    cv::Mat input_image;

    input_image = cv::imread(argv[2]);

    cv::Mat output_image = input_image.clone();

    if (!input_image.data)
    {
        printf("No image data \n");
        return -1;
    }
    cv::Mat kernel = cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(2*value+1, 2*value+1));

    cv::Mat bw;
    cv::cvtColor(input_image, bw, cv::COLOR_BGR2GRAY);

    cv::threshold(bw, bw, 0, 255, CV_THRESH_OTSU);

    cv::Mat border;

    cv::erode(bw, border, kernel);

    border = bw - border;

    cv::Mat dist;

    cv::dilate(bw, bw, kernel);

    cv::distanceTransform(bw, dist, cv::DIST_L2, 3);

    cv::normalize(dist, dist, 0, 1.0, cv::NORM_MINMAX);

    cv::threshold(dist, dist, 0.05, 1.0, cv::THRESH_BINARY_INV);
    

    cv::Mat dist_8u;
    dist.convertTo(dist_8u, CV_8U);

    // Find total markers

    
    std::vector<std::vector<cv::Point> > contours;
    cv::findContours(dist_8u, contours, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE);
    // Create the marker image for the watershed algorithm
    cv::Mat markers = cv::Mat::zeros(dist.size(), CV_32S);

    // Draw the foreground markers
    for (size_t i = 0; i < contours.size(); i++)
    {
        cv::drawContours(markers, contours, static_cast<int>(i), cv::Scalar(static_cast<int>(i)+1), -1);
    }
    // Draw the background marker
    cv::circle(markers, cv::Point(5,5), 3, cv::Scalar(255), -1);

    //markers.convertTo(markers, CV_8U, 255);

/*
    printf("input channels: %d, markers channels: %d\n", input_image.channels(), markers.channels());
    printf("input depth: %d, markers depth: %d\n", input_image.depth(), markers.depth());
    printf("input type: %d, markers type: %d\n", input_image.type(), markers.type());
*/

    cv::watershed(input_image, markers);

    cv::Mat mark;
    markers.convertTo(mark, CV_8U);
    cv::bitwise_not(mark, mark);
    
    // image looks like at that point
    // Generate random colors
    std::vector<cv::Vec3b> colors;
    for (size_t i = 0; i < contours.size(); i++)
    {
        int b = cv::theRNG().uniform(0, 256);
        int g = cv::theRNG().uniform(0, 256);
        int r = cv::theRNG().uniform(0, 256);
        colors.push_back(cv::Vec3b((uchar)b, (uchar)g, (uchar)r));
    }
    // Create the result image
    cv::Mat dst = cv::Mat::zeros(markers.size(), CV_8UC3);
    // Fill labeled objects with random colors
    for (int i = 0; i < markers.rows; i++)
    {
        for (int j = 0; j < markers.cols; j++)
        {
            int index = markers.at<int>(i,j);
            if (index > 0 && index <= static_cast<int>(contours.size()))
            {
                dst.at<cv::Vec3b>(i,j) = colors[index-1];
            }
        }
    }

    cv::namedWindow("Output Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Output Image", dst);

    cv::waitKey(0);

/*
    printf("Type: %d\n", dst.type());
    printf("Channels: %d\n", dst.channels());
    printf("Depth: %d\n", dst.depth());
*/

    cv::imwrite(argv[3], dst);

    return 0;
}