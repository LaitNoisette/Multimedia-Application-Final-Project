
#include "OpenCV_wrapper.h"

OpenCV_wrapper::OpenCV_wrapper() {
	picture = Mat();
}

void OpenCV_wrapper::setImage(String imageFileName) {
	picture = imread(imageFileName);
}

void OpenCV_wrapper::createCopyImage() {
	pictureTemp = Mat(picture);
}

void OpenCV_wrapper::savePicture(String imageFileName) {
	imwrite(imageFileName, picture);
}

void OpenCV_wrapper::saveTempPicture(String imageFileName) {
	imwrite(imageFileName, pictureTemp);
}

void OpenCV_wrapper::deleteCopyImage(String imageFileName) {
	remove(imageFileName.c_str());
}


void OpenCV_wrapper::cannyEdgeDetection(double lowThreshold, double highThreshold, int kernel, bool validation) {
	if (lowThreshold > highThreshold) {
		double tempThres = highThreshold;
		highThreshold = lowThreshold;
		lowThreshold = tempThres;
	}

	transform(lowThreshold, highThreshold, kernel, validation);
}

void OpenCV_wrapper::transform(double lowThreshold, double highThreshold, int kernel, bool validation) {
	if (validation) {
		Mat detectedEdges = cv::Mat::zeros(picture.size(), picture.type());
		Canny(picture, detectedEdges, lowThreshold, highThreshold, kernel);
	}
	else
	{
		Mat detectedEdges = cv::Mat::zeros(pictureTemp.size(), pictureTemp.type());
		Canny(pictureTemp, detectedEdges, lowThreshold, highThreshold, kernel);
	}
	
}


void OpenCV_wrapper::dilatation(int dilatationSize,bool validation) {
	if (validation) {
		Mat kernelDilatation = getStructuringElement(MORPH_DILATE, Size(dilatationSize, dilatationSize));
		dilate(picture, picture, kernelDilatation);
	}
	else
	{
		Mat kernelDilatation = getStructuringElement(MORPH_DILATE, Size(dilatationSize, dilatationSize));
		dilate(pictureTemp, pictureTemp, kernelDilatation);
	}
	
}

void OpenCV_wrapper::erosion(int erosionSize, bool validation) {
	if (validation) {
		Mat kernelErosion = getStructuringElement(MORPH_ERODE, Size(erosionSize, erosionSize));
		dilate(picture, picture, kernelErosion);
	}
	else
	{
		Mat kernelErosion = getStructuringElement(MORPH_ERODE, Size(erosionSize, erosionSize));
		dilate(pictureTemp, pictureTemp, kernelErosion);
	}
	
}


void OpenCV_wrapper::lightenDarken(int brightnessRatio,bool validation) {
	if (validation) {

	}
	else
	{
		pictureTemp.convertTo(pictureTemp, -1, 1, brightnessRatio);
	}
	
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

void OpenCV_wrapper::resize2Dimension(double sizeX, double sizeY,bool validation) {
	if (validation) {
		
	}
	else
	{
		resize(pictureTemp, pictureTemp, Size2d(sizeX, sizeY));
	}
	
}

void OpenCV_wrapper::resizeFactor(double sizeFactor,bool validation) {
	if (validation) {

	}
	else
	{
		resize(pictureTemp, pictureTemp, Size2d(sizeFactor, sizeFactor));
	}
	
}
