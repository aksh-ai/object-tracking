#ifndef TRACKER_H_
#define TRACKER_H_

#include <opencv2/opencv.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <sstream>

class Tracker {
	public:
		static void run();
	private:
		static cv::Mat thresholdedImg(cv::Mat original, cv::Scalar lowHSV, cv::Scalar highHSV, bool removeNoise, bool convertBackToRGB);
		static cv::Vec3b RGBtoHSV(float r, float g, float b);
};

#endif /* TRACKER_H_ */
