/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Calculate monthly and annual cost of living expenses
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
    int rent,util,phone,cable;
    double monCost,yrCost;
    //Input values
    cout<<"How much do you spend on rent a month?";
    cin>>rent;
    cout<<"How much do you spend on utilities a month?";
    cin>>util;
    cout<<"How much do you spend on your phone a month?";
    cin>>phone;
    cout<<"How much do you spend on cable a month?";
    cin>>cable;
    
    //Process values -> Map inputs to Outputs
    monCost=rent+util+phone+cable;
    yrCost=monCost*12;
    //Display Output
    cout<<"Your monthly expenses equale to $"<<fixed<<showpoint<<setprecision(2)<<monCost<<endl;
    cout<<"Your yearly expenses equate to $"<<fixed<<showpoint<<setprecision(2)<<yrCost;
    //Exit Program
    return 0;
}