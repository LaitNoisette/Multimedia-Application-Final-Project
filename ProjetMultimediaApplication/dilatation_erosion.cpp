#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void dilatation(Mat &inputImage,int dilatationSize) {
	Mat kernelDilatation = getStructuringElement(MORPH_DILATE, Size(dilatationSize,dilatationSize));
	dilate(inputImage, inputImage, kernelDilatation);
}

void erosion(Mat &inputImage, int erosionSize) {
	Mat kernelErosion = getStructuringElement(MORPH_ERODE, Size(erosionSize, erosionSize));
	dilate(inputImage, inputImage, kernelErosion);
}

void mainDilatationErosion(Mat &inputImage,int choice) {
	/*
	erosion == 0
	dilatation ==1
	*/
	if (choice == 0) {
		
	}
	else if(choice==1)
	{

	}
}