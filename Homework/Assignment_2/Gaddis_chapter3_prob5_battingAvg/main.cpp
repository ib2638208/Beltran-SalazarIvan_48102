/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Calculate the average batting average of a wannabe pro
 */

//System Libraries
#include <iostream> 
#include <iomanip>//Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration of Variables
    string name;
    int numBat;
    double numHit,batAvg;
    //Input values
    cout<<"Hello I am program designed to calculate your batting average, what is your name?";
    cin>>name;
    cout<<name<<", how many times have your gone up to bat?";
    cin>>numBat;
    cout<<name<<", how many times have you hit?";
    cin>>numHit;
   
   
    //Process values -> Map inputs to Outputs
    batAvg=numHit/numBat;
    //Display Output
    cout<<"Your batting average is "<<fixed<<showpoint<<setprecision(4)<<batAvg;
    //Exit Program
    return 0;
}