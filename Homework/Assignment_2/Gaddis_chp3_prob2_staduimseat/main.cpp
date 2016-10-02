/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on September 27th, 2016 7:18PM
   Purpose:  Calculate and display the amount generated from 3 different tickets.
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
    int cA,cB,cC;
    double income;
    //Input values
    cout<<"How many class A tickets were sold?";
    cin>>cA;
    cout<<"How many class B tickets were sold?";
    cin>>cB;
    cout<<"How many class C tickets were sold?";
    cin>>cC;
    //Process values -> Map inputs to Outputs
    income=(15*cA)+(12*cB)+(9*cC);
    //Display Output
    cout<<"The total amount earned :$"<<fixed<<showpoint<<setprecision(2)<<income;
    //Exit Program
    return 0;
}