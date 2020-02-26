#include <stdio.h>
#include <opencv2/opencv.hpp>

cv::Mat compute_threshold(cv::Mat input_image, int threshold)
{
    cv::Mat output_image = input_image.clone();

    for (int i = 0; i < input_image.rows; i++)
    {
        for (int j = 0; j < input_image.cols; j++)
        {
            output_image.at<uchar>(i,j) = (input_image.at<uchar>(i,j) >= threshold) ? 255 : 0;
        }
    }

    return output_image;
}

bool compare_images(cv::Mat first_image, cv::Mat second_image)
{
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

    return equal;
}

cv::Mat compute_infimum(cv::Mat first_image, cv::Mat second_image)
{
    cv::Mat output_image = first_image.clone();
    
    for (int i = 0; i < first_image.rows; i++)
    {
        for (int j = 0; j < first_image.cols; j++)
        {
            output_image.at<uchar>(i,j) = std::min(first_image.at<uchar>(i,j), second_image.at<uchar>(i,j));
        }
    }

    return output_image;
}

cv::Mat compute_supremum(cv::Mat first_image, cv::Mat second_image)
{
    cv::Mat output_image = first_image.clone();
    
    for (int i = 0; i < first_image.rows; i++)
    {
        for (int j = 0; j < first_image.cols; j++)
        {
            output_image.at<uchar>(i,j) = std::max(first_image.at<uchar>(i,j), second_image.at<uchar>(i,j));
        }
    }

    return output_image;
}

cv::Mat compute_erosion(cv::Mat input_image, int value, float max_value=255)
{
    cv::Mat output_image = input_image.clone();

    for (int i = 0; i < input_image.rows; i++)
    {
        for (int j = 0; j < input_image.cols; j++)
        {
            uchar min = max_value;
            for (int h = -value; h < value + 1; h++)
            {
                for (int w = -value; w < value + 1; w++)
                {
                    int row_offset = (((i+h) < 0) || ((i+h) > (input_image.rows - 1))) ? 0 : h;
                    int col_offset = (((j+w) < 0) || ((j+w) > (input_image.cols - 1))) ? 0 : w;

                    if (input_image.at<uchar>(i+row_offset,j+col_offset) < min) min = input_image.at<uchar>(i+row_offset,j+col_offset);
                }
            }
            output_image.at<uchar>(i,j) = min;
        }
    }

    return output_image;
}

cv::Mat compute_dilation(cv::Mat input_image, int value, float min_value=0)
{
    cv::Mat output_image = input_image.clone();

    for (int i = 0; i < input_image.rows; i++)
    {
        for (int j = 0; j < input_image.cols; j++)
        {
            uchar max = min_value;
            for (int h = -value; h < value + 1; h++)
            {
                for (int w = -value; w < value + 1; w++)
                {
                    int row_offset = (((i+h) < 0) || ((i+h) > (input_image.rows - 1))) ? 0 : h;
                    int col_offset = (((j+w) < 0) || ((j+w) > (input_image.cols - 1))) ? 0 : w;

                    if (input_image.at<uchar>(i+row_offset,j+col_offset) > max) max = input_image.at<uchar>(i+row_offset,j+col_offset);
                }
            }
            output_image.at<uchar>(i,j) = max;
        }
    }

    return output_image;
}

cv::Mat compute_opening(cv::Mat input_image, int value, float min_value=0, float max_value=255)
{
    cv::Mat output_image = input_image.clone();

    output_image = compute_erosion(input_image, value, max_value);
    output_image = compute_dilation(output_image, value, min_value);

    return output_image;
}

cv::Mat compute_closing(cv::Mat input_image, int value, float min_value=0, float max_value=255)
{
    cv::Mat output_image = input_image.clone();

    output_image = compute_dilation(input_image, value, min_value);
    output_image = compute_erosion(output_image, value, max_value);

    return output_image;
}