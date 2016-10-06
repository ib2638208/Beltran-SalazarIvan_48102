/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on September 29th, 2016, 12:00 PM
   Purpose:  Create a program that determines the size of a rectangle
 */

//System Libraries
#include <iostream> 
#include <iomanip>
//Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int length, width, area;
    int length2, width2, area2;
    //Input values
    cout<<"What is the length and width of rectangle 1?";
    cin>>length>>width;
    cout<<"What is the length and width of rectangle 2?";
    cin>>length2>>width2;
            
            
    //Process values -> Map inputs to Outputs
    area=length*width;
    area2=length2*width2;
    //Display Output
    if (area>area2)
    {cout<<"The area of the first rectangle is larger.";
    }
    else if (area2>area)
    { cout<<"The area of the second rectangle is larger.";
    
    }else if (area==area2)
    { cout<<"The area of both rectangles is the same.";
    }     
    
    //Exit Program
    return 0;
}