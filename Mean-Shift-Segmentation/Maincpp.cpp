
#include <iostream>
#include "MeanShift.cpp"
#include <time.h>

int main(){
	// Load image
	clock_t t;
	t = clock();
	Mat Img = imread("../images/input/minion.jpg");
	//resize(Img, Img, Size(256, 256), 0, 0, 1);

	// Convert color from RGB to Lab
	cvtColor(Img, Img, CV_RGB2Lab);

	// Initilize Mean Shift with spatial bandwith and color bandwith
	MeanShift MSProc(14, 13);
	// Filtering Process
	MSProc.MSFiltering(Img);
	// Segmentation Process include Filtering Process (Region Growing)
//	MSProc.MSSegmentation(Img);

	// Print the bandwith
	cout<<"the Spatial Bandwith is "<<MSProc.hs<<endl;
	cout<<"the Color Bandwith is "<<MSProc.hr<<endl;

	// Convert color from Lab to RGB
	cvtColor(Img, Img, CV_Lab2RGB);

	// Show the result image
  imwrite("../images/minion_seg_14_13.png",Img);
	cout<<((clock()-t)/CLOCKS_PER_SEC);
	return 1;
}
