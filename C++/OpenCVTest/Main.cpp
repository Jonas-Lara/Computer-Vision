#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main()
{
    std::string image_path = samples::findFile("/home/jonas/OpenCV-Images/lenna.png");
    Mat img = imread(image_path, IMREAD_COLOR);
    if(img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }
    imshow("OpenCV Test", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    
    return 0;
}
