#pragma once
#pragma once
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int removeFrequnce();
int dftDemo();
int ifftDemo();
int mouseROI();


void on_mouse(int EVENT, int x, int y, int flags, void* userdata);
int selectPolygon(cv::Mat srcMat, cv::Mat& dstMat);
int calcVisibalMag(cv::Mat srcMat, cv::Mat& dstMat);
int calcVisbalDft(cv::Mat srcMat, cv::Mat& magMat, cv::Mat& ph, double& normVal);
int calcDft2Image(cv::Mat magMat, cv::Mat ph, double normVal, cv::Mat& dstMat);
int fristmat(cv::Mat src, cv::Mat& complexImg,cv::Mat& mask1);
int nextmat(cv::Mat src, cv::Mat& complexImg, cv::Mat& mask);