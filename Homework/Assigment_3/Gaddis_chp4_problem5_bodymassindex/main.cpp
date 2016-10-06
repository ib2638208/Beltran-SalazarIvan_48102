/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on September 29th, 2016, 12:00 PM
   Purpose:  Calculate a persons BMI and determine what type of lifestyle they live
 */

//System Libraries
#include <iostream>
#include <math.h>
//Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int weight, height;
    int bmi;
    //Input values
    cout<<"Please enter your weight(in pounds) ";
    cin>>weight;
    cout<<"Please enter your height(in inches) ";
    cin>>height;
          
    //Process values -> Map inputs to Outputs
    bmi=(weight*703)/pow(height,2);
    //Display Output
    if (bmi>=18.5 && bmi<=25)
    { cout<<"Your BMI is "<<bmi<<", which is considered optimal.";
    }
    else if(bmi<18.5){
    cout<<"Your BMI is "<<bmi<<", which is considered to be underweight.";
    }
    else if(bmi>25){
    cout<<"Your BMI is "<<bmi<<", which is considered to be overweight.";
    }
    //Exit Program
    return 0;
}

