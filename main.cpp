#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <stdio.h>

using namespace cv;
using namespace std;

// *****

int main(int argc, char* argv[])
{
    // Load the input image
    
    Mat inputImage = imread("sample.jpg");

    // Check if the image was properly loaded
    if (inputImage.empty())
    {
        cout << "Error: Could not load input image." << endl;
        return -1;
    }

    // Convert the input image to the HSV color space
    Mat hsvImage;
    cvtColor(inputImage, hsvImage, COLOR_BGR2HSV);

    // Define the range of colors for the colored splotch in the HSV color space, here it is a range of blue colors
    Scalar lowerColor(100, 50, 50);
    Scalar upperColor(140, 255, 255);

    // Filter the image to isolate the colored splotch
    Mat mask;
    inRange(hsvImage, lowerColor, upperColor, mask);

    // Create a kernel for the morphological operations, larger size closes more small holes
    Mat kernel = getStructuringElement(MORPH_ELLIPSE, Size(12, 12));

    // Apply the morphological opening operation to the input image
    Mat open;
    morphologyEx(mask, open, MORPH_OPEN, kernel);
    
    // Apply the morphological closing operation to the input image
    Mat closed;
    morphologyEx(open, closed, MORPH_CLOSE, kernel);

    // Create the output image
    Mat outputImage = Mat::zeros(inputImage.size(), inputImage.type());

    // Fill the output image with the colored splotch
    inputImage.copyTo(outputImage, closed);

    // Show input and output images
    imshow("Input", inputImage);
    imshow("Result", outputImage);
    waitKey(0);
    imwrite("result.jpg", outputImage);
    

    return 0;
}