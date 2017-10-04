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
    int row;
    int column;

    //Project Planning part 2 example matrix
    image.open("machupicchu.bmp");
    bmp = image.toPixelMatrix();   
    /*for (int r = 0; r < bmp.size(); r++){
        for (int c = 0; c < bmp[r].size(); c++){
            column = c;
        }
        row = r;
    }
    */
    cout<< "Image is size " << bmp[0].size() << " pixels wide and " << bmp.size() << " pixels high"<<endl;
    //Allow user to access file of an image

    //check "if" image fits pixel type; if not loop back to intro

    //convert image pixel into vector matrix
    //change pixel values to gray scale values using math cmath to get average

    //Save image grayscale as a new file


    return 0;
}
