#include <stdio.h>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv )
{
    if (argc != 2)
    {
        printf("usage: ./exercise_01c_wheel <input_path>\n");
        return -1;
    }

    cv::Mat input_image;

    input_image = imread(argv[1], cv::IMREAD_GRAYSCALE);

    cv::Mat output_image = input_image.clone();

    if (!input_image.data)
    {
        printf("No image data \n");
        return -1;
    }

    int scaling_factor = 7;

    cv::resize(output_image, output_image, cv::Size(0,0), scaling_factor, scaling_factor);

    cv::Mat kernel = cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(3, 3));

    cv::erode(output_image, output_image, kernel);
    cv::Canny(output_image, output_image, 50, 200);
    cv::dilate(output_image, output_image, kernel);

    std::vector<std::vector<cv::Point>> contours;
    std::vector<cv::Vec4i> hierarchy;
    int imax = 0, areamax = 0;
    findContours(output_image, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
    
    
    for(int idx = 0; idx >= 0; idx = hierarchy[idx][0])
    {
        cv::Rect rect = cv::boundingRect(contours[idx]);
        int area = rect.width * rect.height;
        if (area > areamax)
        {
            areamax = area;
            imax = idx;
        }
    }
    std::vector<cv::Point> hull;
    convexHull(contours[imax], hull);

    printf("Number of teeth detected: %d\n",hull.size());

    cv::Mat drawing = cv::Mat::zeros( input_image.size() * scaling_factor, CV_8UC3 );
    cv::drawContours(drawing, std::vector<std::vector<cv::Point> >(1,contours[imax]), -1, cv::Scalar(255, 255, 255), scaling_factor, 8, cv::noArray(), 2147483647 , cv::Point());

    for (int i = 0; i < hull.size(); i++)
    {
        cv::circle(drawing, hull.at(i), 2, cv::Scalar(0, 0, 255), scaling_factor*2);
    }

    cv::resize(drawing, drawing, input_image.size());

    cv::namedWindow("Output Image", cv::WINDOW_AUTOSIZE);
    imshow("Output Image", drawing);

    cv::waitKey(0);

    return 0;
}