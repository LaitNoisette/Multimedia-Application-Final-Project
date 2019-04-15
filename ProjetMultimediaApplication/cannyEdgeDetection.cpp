#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void cannyEdgeDetection(Mat &inputImage, double lowThreshold ,double highThreshold, int kernel) {
	Mat detectedEdges = cv::Mat::zeros(inputImage.size(),inputImage.type());
	Canny(inputImage, detectedEdges, lowThreshold, highThreshold, kernel);
}