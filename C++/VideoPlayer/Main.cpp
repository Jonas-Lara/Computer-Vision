// Include Libraries
#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;

int main()
{
	// Create a video capture object, in this case we are reading the video from a file
VideoCapture vid_capture("/home/jonas/OpenCV-Images/driving.mp4");

if (!vid_capture.isOpened())
	{
		cout << "Error opening video stream or file" << endl;
	}
else
	{
            // Obtain fps and frame count by get() method and print
		int fps = vid_capture.get(5);
		cout << "Frames per second :" << fps;
		int frame_count = vid_capture.get(7);
		cout << "Frame count :" << frame_count;
	}

return 0;
}
