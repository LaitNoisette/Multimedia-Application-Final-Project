#include "OpenCV_wrapper.h"

void OpenCV_wrapper::cannyEdgeDetection(Mat &inputImage, double inputLowThreshold, double input_HighThreshold, int inputKernel) {
	Image = inputImage;
	lowThreshold = inputLowThreshold;
	highThreshold = input_HighThreshold;
	kernel = inputKernel;
}

void OpenCV_wrapper::transform() {
	Mat detectedEdges = cv::Mat::zeros(Image.size(), Image.type());
	Canny(Image, detectedEdges, lowThreshold, highThreshold, kernel);
}


void OpenCV_wrapper::dilatation(Mat &inputImage, int dilatationSize) {
	Mat kernelDilatation = getStructuringElement(MORPH_DILATE, Size(dilatationSize, dilatationSize));
	dilate(inputImage, inputImage, kernelDilatation);
}

void OpenCV_wrapper::erosion(Mat &inputImage, int erosionSize) {
	Mat kernelErosion = getStructuringElement(MORPH_ERODE, Size(erosionSize, erosionSize));
	dilate(inputImage, inputImage, kernelErosion);
}

void OpenCV_wrapper::mainDilatationErosion(Mat &inputImage, int choice) {
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

void OpenCV_wrapper::lightenDarken(Mat &inputImage, int brightnessRatio) {
	inputImage.convertTo(inputImage, -1, 1, brightnessRatio);
}


void OpenCV_wrapper::panoramaStitching(char* listeImages[], int indiceListeImage) {
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

void OpenCV_wrapper::resize2Dimension(Mat &inputImage, double sizeX, double sizeY) {
	resize(inputImage, inputImage, Size(), sizeX, sizeY);
}

void OpenCV_wrapper::resizeFactor(Mat &inputImage, double sizeFactor) {
	resize(inputImage, inputImage, Size2d(sizeFactor, sizeFactor));
}

void OpenCV_wrapper::resizeMain(Mat &inputImage) {

}