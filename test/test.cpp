// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;
int main(int argc, char  **argv)
{
    char path[] = "F:\\picture\\image\\8.jpg";
    Mat image;
    image = imread(path, IMREAD_UNCHANGED);

    if (!image.data)
    {
        cout << "can't find or open the file!" << endl;
        return -1;
    }

    namedWindow("Display window", WINDOW_AUTOSIZE);
    imshow("Display window", image);
    waitKey(0);
    return 0;
}

