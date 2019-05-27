#pragma once
#include <iostream>

#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/stitching.hpp>

using namespace std;
using namespace cv;


class OpenCV_wrapper{
private:
	Mat &Image;
	double lowThreshold;
	double highThreshold;
	int kernel;

public:
	void cannyEdgeDetection(Mat &inputImage, double inputLowThreshold, double input_HighThreshold, int inputKernel);
	void transform();
	void dilatation(Mat &inputImage, int dilatationSize);
	void erosion(Mat &inputImage, int erosionSize);
	void mainDilatationErosion(Mat &inputImage, int choice);
	void lightenDarken(Mat &inputImage, int brightnessRatio);
	void panoramaStitching(char* listeImages[], int indiceListeImage);
	void resize2Dimension(Mat &inputImage, double sizeX = 1, double sizeY = 1);
	void resizeFactor(Mat &inputImage, double sizeFactor);
	void resizeMain(Mat &inputImage);
};

