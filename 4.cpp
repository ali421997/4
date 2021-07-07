#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(void){
	Mat testImage = imread("number_zero", 0);

	// Read an image
	Mat boy = imread("boy.jpg");
	// Display the image using imshow
	imshow("Boy", boy);
	// Wait for user to press key
	waitKey(0);
	// Destroy the window
	destroyAllWindows();
}
