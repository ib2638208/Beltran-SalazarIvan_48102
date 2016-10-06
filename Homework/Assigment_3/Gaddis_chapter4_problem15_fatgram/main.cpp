/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Create a program that asks for calories in a food and fat grams, also indicating wether or not the food is low in fat.
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
    int cals, fGram, perF ; //Total calories, Grams of fat, Calories from fat, percentage of fat
    float calfF;
    //Input values
    cout<<"Enter the total calories and fat grams of the food"<<endl;
    cin>>cals>>fGram;
    
    //Process values -> Map inputs to Outputs
    calfF=fGram*9;
    perF=((calfF*100)/cals);
    
    //Display Output
    cout<<"Calories from fat account for "<<fixed<<showpoint<<setprecision(2)<<perF<<"% of the foods total calories"<<endl;
    if(perF<30){
        cout<<"This food is low in fat!";
    }
    else if(perF>=30 && perF<=45){
        cout<<"This food is moderately fatty";
    }
    else if(perF>45){
        cout<<"This food is high in fat!";
    }
    //Exit Program
    return 0;
}