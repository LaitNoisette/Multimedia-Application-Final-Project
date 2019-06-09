#pragma once
#include <iostream>

#include<cmath>

#include<opencv2/opencv.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/stitching.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;


class OpenCV_wrapper{
private:
	Mat picture;
	Mat pictureTemp;

public:
	OpenCV_wrapper();
	void cannyEdgeDetection(double lowThreshold, double highThreshold, int kernel, bool validation);
	void transform(double lowThreshold, double highThreshold, int kernel, bool validation);
	void dilatation(int dilatationSize, bool validation);
	void erosion(int erosionSize, bool validation);
	void lightenDarken(int brightnessRatio, bool validation);
	void panoramaStitching(char* listeImages[], int indiceListeImage);
	void resize2Dimension(double sizeX, double sizeY, bool validation);
	void resizeFactor(double sizeFactor,bool validation);
	void setImage(String imageFileName);
	void saveTempPicture(String imageFileName);
	void createCopyImage();
	void deleteCopyImage(String imageFileName);
	void savePicture(String imageFileName);
	void modifyPrevious();
	void modifyNext();
};

