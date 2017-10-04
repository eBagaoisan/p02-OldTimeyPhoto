#include <vector>
#include <iostream>
#include <string>
#include "bitmap.h"

using namespace std;

int main(){
    //variables
    Bitmap image;
    vector<vector<Pixel> > bmp;
    Pixel rgb;

    //Example Print
    bmp = image.toPixelMatrix();
    image.open("machupicchu.bmp");

    //Introduction of program to user

    //Allow user to access file of an image

    //check "if" image fits pixel type; if not loop back to intro

    //convert image pixel into vector matrix
    //change pixel values to gray scale values using math cmath to get average

    //Save image grayscale as a new file


    return 0;
}
