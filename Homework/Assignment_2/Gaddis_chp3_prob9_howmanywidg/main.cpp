/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Create a program that asks for pallet weight and pallet weight stacked and calculated the mount of widgets from that
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration of Variables
    float pallet, palletSt,numWid,weightW;
    float widget=9.20;
    //Input values
    cout<<"How much does the pallet weight by itself?";
    cin>>pallet;
    cout<<"How much does the pallet weight stacked?";
    cin>>palletSt;
    //Process values -> Map inputs to Outputs
    weightW=palletSt-pallet;
    numWid=weightW/widget;
    //Display Output
    cout<<"The amount of widgets on the pallet is "<<numWid;
    //Exit Program
    return 0;
}