#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void resize2Dimension(Mat &inputImage,double sizeX=1, double sizeY=1) {
	resize(inputImage, inputImage, Size(), sizeX, sizeY);
}

void resizeFactor(Mat &inputImage, double sizeFactor) {
	resize(inputImage, inputImage, Size2d(sizeFactor, sizeFactor));
}

void resizeMain(Mat &inputImage) {
	
}