#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
	string image_path = "/Users/user/OneDrive - Universiti Teknologi PETRONAS/Documents/UTP/4th2nd/FYP/Site/visit 1/idk/IMG_1491.JPG";

	Mat image = imread(image_path, IMREAD_COLOR);
	resize(image, image, { 700,700 }, 0, 0, cv::INTER_NEAREST);

	imshow("Image", image);

	waitKey(0);

	return 0;
}