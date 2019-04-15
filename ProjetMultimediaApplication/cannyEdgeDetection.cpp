#include "cannyEdgeDetection.h"

cannyEdgeDetection::cannyEdgeDetection(Mat &inputImage, double inputLowThreshold, double input_HighThreshold, int inputKernel) {
	Image = inputImage;
	lowThreshold = inputLowThreshold;
	highThreshold = input_HighThreshold;
	kernel = inputKernel;
}

void cannyEdgeDetection::transform() {
	Mat detectedEdges = cv::Mat::zeros(Image.size(),Image.type());
	Canny(iImage, detectedEdges, lowThreshold, highThreshold, kernel);
}



