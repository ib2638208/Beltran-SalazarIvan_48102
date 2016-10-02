/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Create a program that calculated the average of 5 test scores based on input
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
    float t1,t2,t3,t4,t5;
    double testAvg;
    
    //Input values
    cout<<"Please enter your 5 test scores:";
    cin>>t1>>t2>>t3>>t4>>t5;
    //Process values -> Map inputs to Outputs
    testAvg=(t1+t2+t3+t4+t5)/5;
    //Display Output
    cout<<"Your test average is "<<fixed<<showpoint<<setprecision(2)<<testAvg<<endl;
    //Exit Program
    return 0;
}