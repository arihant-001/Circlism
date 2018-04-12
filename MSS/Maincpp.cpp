
#include <iostream>
#include "MeanShift.cpp"
#include <time.h>

int main(int argn, char** arg){

	string image_path, image_save_path;
	image_path = arg[1];
	image_save_path = arg[2];

	clock_t t;
	t = clock();
	Mat Img = imread(image_path);

	cvtColor(Img, Img, CV_RGB2Lab);

	// Initilize Mean Shift with spatial bandwith and color bandwith
	MeanShift MSProc(14, 13);
	// Filtering Process
	MSProc.MSFiltering(Img);
	// Segmentation Process include Filtering Process (Region Growing)
	// MSProc.MSSegmentation(Img);

	cvtColor(Img, Img, CV_Lab2RGB);

  imwrite(image_save_path,Img);
	cout<<"Time Taken: "<<((clock()-t)/CLOCKS_PER_SEC)<<" seconds";
	return 1;
}
