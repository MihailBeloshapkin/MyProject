#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/video.hpp>

using namespace cv;

namespace MyProject
{
	class optical_flow
	{
//	private:
	//	static vector<cv::Point2f> p0;
	//	static vector<cv::Point2f> p1;
	public:
		static void optical_flow_alg(cv::VideoCapture capture);
	};

}

