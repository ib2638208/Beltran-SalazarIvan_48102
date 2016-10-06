/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Create a menu that asks for which medium and the amount of feet to be traveled
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
    int choice;
    float time,feet;
    //Input values
    cout<<"Medium"<<endl;
    cout<<"  1. Air"<<endl;
    cout<<"  2. Water"<<endl;
    cout<<"  3. Steel"<<endl;
    cout<<"Select a choice then enter how many feet to be traveled";
    cin>>choice>>feet;
     
    //Process values -> Map inputs to Outputs

    //Display Output
    if(choice==1){
        time=feet/1100;
        cout<<"It would take approximately: "<<fixed<<showpoint<<setprecision(4)<<time<<" seconds!";
    }
    else if(choice==2){
        time=feet/4900;
        cout<<"It would take approximately: "<<fixed<<showpoint<<setprecision(4)<<time<<" seconds!";
    }
    else if(choice==3){
        time=feet/16400;
        cout<<"It would take approximately: "<<fixed<<showpoint<<setprecision(4)<<time<<" seconds!";
    }
    else if (choice<1 || choice>3){
    cout<<"Thats not a valid choice!";
    }
    //Exit Program
    return 0;
}