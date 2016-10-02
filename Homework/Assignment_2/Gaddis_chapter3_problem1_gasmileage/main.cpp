/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on September 27th, 2016
   Purpose:  Calculate the milage of a car
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
    double galHold, mileFtank, milePgal;
    //Input values
    cout<<"Enter how many gallons your vehicle holds:";
    cin>>galHold;
    cout<<"Enter how many miles you get on a full tank:";
    cin>>mileFtank;
    
    //Process values -> Map inputs to Outputs
    milePgal=mileFtank/galHold;
    //Display Output
    cout<<"You get "<<milePgal<<" miles to the gallon, congratulations!"<<endl;
    //Exit Program
    return 0;
}