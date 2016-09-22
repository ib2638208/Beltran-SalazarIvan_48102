/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ivan Beltran-Salazar
 * Created on September 20, 2016, 12:11 PM
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI=4*atan(1.0);
const float CNVDEGR=PI/180; //conversion from degree to radians



//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float deg, radians;
    
    //Input or initialize values Here
    deg=5;
    radians=deg*CNVDEGR;
    
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    deg+=5;
    radians=deg*CNVDEGR;
    
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
        deg+=5;
    radians=deg*CNVDEGR;
    
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
        deg+=5;
    radians=deg*CNVDEGR;
    
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
        deg+=5;
    radians=deg*CNVDEGR;
    
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    

    //Exit
    return 0;
}

