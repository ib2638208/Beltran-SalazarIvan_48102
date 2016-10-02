/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Calculate the rainfall average of three months
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
    string mon1,mon2,mon3;
    double rain1,rain2,rain3;
    double rainAvg;
    //Input values
    cout<<"Please enter which months you want to calculate the rainfall average for:";
    cin>>mon1>>mon2>>mon3;
    cout<<"Enter the rainfall(in inches) for "<<mon1;
    cin>>rain1;
    cout<<"Enter the rainfall(in inches) for "<<mon2;
    cin>>rain2;
    cout<<"Enter the rainfall(in inches) for "<<mon3;
    cin>>rain3;
    //Process values -> Map inputs to Outputs
    rainAvg=(rain1+rain2+rain3)/3;
    //Display Output
    cout<<"The avererage monthly rainfall for "<<mon1<<", "<<mon2<<", and "<<mon3<<" is "<<fixed<<showpoint<<setprecision(2)<<rainAvg<<" inches."<<endl;
    //Exit Program
    return 0;
}