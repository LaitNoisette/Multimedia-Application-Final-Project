#include "OpenCV_wraper.h"

void OpenCV_wraper::cannyEdgeDetection(Mat &inputImage, double inputLowThreshold, double input_HighThreshold, int inputKernel) {
	Image = inputImage;
	lowThreshold = inputLowThreshold;
	highThreshold = input_HighThreshold;
	kernel = inputKernel;
}

void OpenCV_wraper::transform() {
	Mat detectedEdges = cv::Mat::zeros(Image.size(), Image.type());
	Canny(Image, detectedEdges, lowThreshold, highThreshold, kernel);
}


void OpenCV_wraper::dilatation(Mat &inputImage, int dilatationSize) {
	Mat kernelDilatation = getStructuringElement(MORPH_DILATE, Size(dilatationSize, dilatationSize));
	dilate(inputImage, inputImage, kernelDilatation);
}

void OpenCV_wraper::erosion(Mat &inputImage, int erosionSize) {
	Mat kernelErosion = getStructuringElement(MORPH_ERODE, Size(erosionSize, erosionSize));
	dilate(inputImage, inputImage, kernelErosion);
}

void OpenCV_wraper::mainDilatationErosion(Mat &inputImage, int choice) {
	/*
	erosion == 0
	dilatation ==1
	*/
	if (choice == 0) {

	}
	else if (choice == 1)
	{

	}
}

void OpenCV_wraper::lightenDarken(Mat &inputImage, int brightnessRatio) {
	inputImage.convertTo(inputImage, -1, 1, brightnessRatio);
}


void OpenCV_wraper::panoramaStitching(char* listeImages[], int indiceListeImage) {
	vector<Mat> imgs;
	for (int i = 0; i < indiceListeImage; i++) {
		Mat img = imread(listeImages[i]);
		if (!img.empty())
		{
			imgs.push_back(img);
		}
	}

	Mat panorama;
	// Create a Stitcher class object with mode panoroma 
	Ptr<Stitcher> stitcher = Stitcher::create(Stitcher::PANORAMA);


	// Command to stitch all the images present in the image array 
	Stitcher::Status status = stitcher->stitch(imgs, panorama);

	if (status == Stitcher::Status::OK) {
		// Store a new image stiched from the given  
		//set of images as "result.jpg" 
		imwrite("result.jpg", panorama);

		// Show the result 
		imshow("Result", panorama);
	}

};

void OpenCV_wraper::resize2Dimension(Mat &inputImage, double sizeX, double sizeY) {
	resize(inputImage, inputImage, Size(), sizeX, sizeY);
}

void OpenCV_wraper::resizeFactor(Mat &inputImage, double sizeFactor) {
	resize(inputImage, inputImage, Size2d(sizeFactor, sizeFactor));
}

void OpenCV_wraper::resizeMain(Mat &inputImage) {

}