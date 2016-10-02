/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Calculate the number of calories consumed from cookies
 */

//System Libraries
#include <iostream>
#include <iomanip> 
//Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration of Variables
    float cokCal=300/4;
    float numAte, totCals;
    //Input values
    cout<<"How many cookies did you eat?";
    cin>>numAte;
    
    //Process values -> Map inputs to Outputs
    totCals=numAte*cokCal;
    //Display Output
    cout<<"The amount of calories consumed: "<<totCals<<". Maybe you should go for a run!"<<endl;
    //Exit Program
    return 0;
}