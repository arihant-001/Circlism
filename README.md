# Digital Circlism
It is a modern artistic expression in which paintings are made with digital tools usually featuring celebrities made of thousands of flat circles on a black background.
# Project Overview
Using traditional method for circlism is time consuming but using algorithms we can save that time.
This project consists of a algorithmic artwork. It is designed to apply digital circlism to images within 10 minutes or less depending upon image resolution.

These are some outputs of our project.

<img src="./out7.png">
<img src="./leaf-out.png">

## Steps
1. Image Segementation using Mean Shift Filtering.
2. Removing background for better results.
3. Canny Edge detection for boundaries.
4. Euclidean distance transformation for packing density.
5. Packing circles using the packing density.

## Step5
The complexity of our circle packing is o(n*n*k) where n is the pixel size of the width and height of the given image and k is the number of discrete steps(used for the distinction of different radii circles). Explaining the Algorithm firstly we are packing the circle with bigger denomination in order to ensure closed circle packing.Then considering each pixel value we are adding circles according to the EDT value at that point and marking a check over the entire range in order to ensure that no overlapping occurs.



