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
    int rgbAvg;
    int row;
    int column;
    string file;
    bool realImage = true;

    //Project Planning part 2 example matrix
    /*
    image.open("machupicchu.bmp");
    bmp = image.toPixelMatrix();   
    cout<< "Image is size " << bmp[0].size() << " pixels wide and " << bmp.size() << " pixels high"<<endl;
    */

    //Allow user to access file of an image
    while( realImage = true){
        cout<<"Please enter a bmp image file that you would like to be gray scaled(filename.bmp): ";
        cin>>file;

    //checks "if" image fits pixel type; if not loop back to intro
        image.open(file);
        realImage = image.isImage();

    if (realImage = true){
    //convert image pixel into vector matrix
        bmp = image.toPixelMatrix();
    
    //change pixel values to gray scale values using math cmath to get average
        for (int r = 0; r<bmp.size(); r++)
        {
            for (int c = 0; c<bmp[r].size(); c++)
            {
                rgb = bmp[r][c];
                rgbAvg = (rgb.red + rgb.green + rgb.blue)/3;
                rgb.red = rgbAvg;
                rgb.green = rgbAvg;
                rgb.blue = rgbAvg;
                bmp[r][c] = rgb;
            }
        }
        image.fromPixelMatrix(bmp);
    
        cout<<"Image size: "<<bmp[0].size()<<"X"<<bmp.size()<<"pixels"<<endl;

    //Save image grayscale as a new file
        image.save("new"+file);
        cout<<"New image saved as: new"+file<<endl;
        break;
    }
    else{
        cout<<"Not an image... Try again."<<endl;

    }
    }

    return 0;
}










