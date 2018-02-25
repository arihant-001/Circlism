#include<iostream>
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;
using namespace std;
int main(){
  Mat image = imread("dog.png");
  return 0;
}
