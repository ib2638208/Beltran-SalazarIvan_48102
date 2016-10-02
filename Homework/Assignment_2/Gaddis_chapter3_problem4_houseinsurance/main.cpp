/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Calculate how much insurance should be covered for a purchase of a house
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
    int costB;
    double minIns;
   
    //Input values
    cout<<"Hello, I am here to help you determine the minimum amount of insurance that should be purchased for your property. "<<endl;
    cout<<"How much did you purchase your property for?";
    cin>>costB;
    
           
    //Process values -> Map inputs to Outputs
    minIns=.8*costB;
    //Display Output
    cout<<"You should insure your property for at least $"<<fixed<<showpoint<<setprecision(2)<<minIns;
    //Exit Program
    return 0;
}