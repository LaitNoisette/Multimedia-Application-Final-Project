#pragma once
#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;



class cannyEdgeDetection {
private:
		double lowThreshold;
		double highThreshold;
		int kernel;
		Mat &Image;
public:
		cannyEdgeDetection(Mat &inputImage, double inputLowThreshold, double input_HighThreshold, int inputKernel);
		void transform();
		~cannyEdgeDetection(); //faire la fonction dans le cpp
};


