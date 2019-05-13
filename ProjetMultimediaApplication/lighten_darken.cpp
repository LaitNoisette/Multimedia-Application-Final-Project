#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void lightenDarken(Mat &inputImage, int brightnessRatio) {
	inputImage.convertTo(inputImage, -1, 1, brightnessRatio);
}