#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>



//
using namespace std;
using namespace cv;


int main(){
    cout << "Hello, OPENCV" << endl;

/////////////// IMAGES IMPORT ///////////////
    //string imgPath =  fs::temp_directory_path() ;
    //cout << "image" << imgPath << endl;
    //string imgPath = "prueba1.jpg" ;



    /*char filename[1024];
    FILE *f = popen("zenity --file-selection","r");
    fgets(filename,1024 , f);
    string filename3 = string(basename(filename));
    cout << string(filename3) << endl;
    string imgPath2 =string ('"' +filename3+'"') ;
    cout << imgPath2 << endl ;
    string imgPath = ('"' +filename3+'"') ;
*/



    string imgPath = "test.jpg";
    cout << "image path: " << imgPath << endl;

    Mat img =imread(imgPath);
    Mat grayImg= imread(imgPath);
    Mat imgBlur= imread(imgPath);

    //cout << img << endl;

    cvtColor(grayImg, grayImg , COLOR_BGR2GRAY);
    GaussianBlur(imgBlur,imgBlur, Size(9,9), 5, 0);

    imshow("Original Image", img);
    imshow("Gray Scale Image", grayImg);
    imshow("Blur Image", imgBlur);
    waitKey(0);



    return 0;

}