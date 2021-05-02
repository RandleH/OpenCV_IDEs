//
//  main.cpp
//  OpenCV
//
//  Created by Randle.Helmslay on 2021/2/18.
//

#include <iostream>
#include "opencv2/opencv.hpp"



using namespace cv;
int main(int argc, char** argv) {
    Mat image;
    image = imread("/Users/randle_h/desktop/lenna.bmp", 1);
    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);

    Mat gray;
    cvtColor(image, gray, COLOR_RGBA2GRAY);
    namedWindow("gray");
    imshow("gray", gray);

    waitKey(0);
    return 0;
}

// g++ temp.cpp -o main.o -c -Wall -I/usr/local/include/opencv4 -std=c++11

// g++ temp.cpp -o main.o --cflags --libs opencv



