/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Create a program that calculates either the area of a circle, rectangle, or a triangle.
 */

//System Libraries
#include <iostream> 
#include <math.h>
//Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration of Variables
    int length, width, base, height, choice, radius;
    float area;
    //Input values
    cout<<"Geometry Calculator"<<endl;
    cout<<"  1. Calculate the Area of a Circle"<<endl;
    cout<<"  2. Calculate the Area of a Rectangle"<<endl;
    cout<<"  3. Calculate the Area of a Triangle"<<endl;
    cout<<"  4. Quit"<<endl;
    cin>>choice;
    //Process values -> Map inputs to Outputs
    if(choice==1){
        cout<<"Enter the radius of the circle";
        cin>>radius;
        area=3.1415*pow(radius,2);
        cout<<"The area of the circle is: "<<area;
    }
    else if(choice==2){
        cout<<"Enter the width and length of the rectangle";
        cin>>width>>length;
        area=width*length;
        cout<<"The area of the rectangle is: "<<area;
    }
    else if(choice==3){
        cout<<"Enter the base and height of the triangle";
        cin>>base>>height;
        area=(height*base)/2;
        cout<<"The area of the triangle is: "<<area;
    }
    else if(choice==4){
        return 0;
    }
    else if(choice<1 || choice>4){
        cout<<"That is not a valid choice!";
    }
    //Display Output

    //Exit Program
    return 0;
}