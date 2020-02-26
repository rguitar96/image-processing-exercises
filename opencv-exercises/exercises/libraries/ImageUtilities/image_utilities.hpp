#include <stdio.h>
#include <opencv2/opencv.hpp>

cv::Mat compute_threshold(cv::Mat input_image, int threshold);
bool compare_images(cv::Mat first_image, cv::Mat second_image);
cv::Mat compute_infimum(cv::Mat first_image, cv::Mat second_image);
cv::Mat compute_supremum(cv::Mat first_image, cv::Mat second_image);
cv::Mat compute_erosion(cv::Mat input_image, int value, int max_value=255);
cv::Mat compute_dilation(cv::Mat input_image, int value, int min_value=0);
cv::Mat compute_opening(cv::Mat input_image, int value, int min_value=0, int max_value = 0);
cv::Mat compute_closing(cv::Mat input_image, int value, int min_value=0, int max_value = 0);