// Include Libraries
#include<iostream>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

int main()
{
	// Create a video capture object, in this case we are reading the video from a file
VideoCapture cap("driving.mp4");

if (!cap.isOpened())
	{
		cout << "Error opening video stream or file" << endl;
	}

while(1){

    Mat frame;
    // Capture frame-by-frame
	cap >> frame; 
    // If the frame is empty, break immediately
    if (frame.empty())
      break;

    // Display the resulting frame
    imshow( "Frame", frame );

    // Press  ESC on keyboard to exit
    char c=(char)waitKey(25);
    if(c==27)
      break;
  }
 
  // When everything done, release the video capture object
  cap.release();

return 0;
}
