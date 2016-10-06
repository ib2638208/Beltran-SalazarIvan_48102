/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on September 29th, 2016, 12:00 PM
   Purpose:  Create a program that calculates the weight in Newtons, and indicating weather the object is too heavy or too light
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int weight;
    int mass;
    //Input values
    cout<<"Enter the mass of the object(in kg) :";
    cin>>mass;
    
    //Process values -> Map inputs to Outputs
    weight=mass*9.8;
    //Display Output
    if (weight>=1000){
    cout<<"The object is too heavy!";
    }
    else if(weight<=10){
    cout<<"The object is too light!";
    }
    else if(weight>10 && weight<1000){
    cout<<"The object is pretty heavy.";
    }
    //Exit Program
    return 0;
}
