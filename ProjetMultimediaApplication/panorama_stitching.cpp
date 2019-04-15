#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>

#include "opencv2/imgcodecs.hpp" 
#include "opencv2/highgui.hpp" 
#include "opencv2/stitching.hpp"

using namespace cv;
using namespace std;


void panoramaStitching(char* listeImages[], int indiceListeImage) {
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


