#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main() 
{
    Mat image;

    namedWindow("Display window");

    VideoCapture cap(0);

    if (!cap.isOpened()) {

    std::cout << "cannot open camera";
    }

    while (true) 
    {
        cap >> image;

        imshow("Video Capture", image);

        waitKey(25);
    }

return 0;

}
