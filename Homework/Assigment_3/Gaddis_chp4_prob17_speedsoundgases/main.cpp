/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Create a menu that displays different mediums then ask a time and calculate the amount of feet traveled by sound in that time
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants
const float spCarbon=258;
const float spAir=331.5f;
const float spHelium=972;
const float spHydro=1270;
//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration of Variables
    int time, choice;
    float meter;
    //Input values
    cout<<"1. Carbon dioxide 258.0mps"<<endl;
    cout<<"2. Air            331.5mps"<<endl;
    cout<<"3. Helium         972.0mps"<<endl;
    cout<<"4. Hydrogen       1270.0mps"<<endl;
    cout<<"Select one and type the number of seconds: "<<endl;
    cin>>choice>>time;
    if(choice==1){
        meter=spCarbon*time;
        cout<<"Sound traveled: "<<fixed<<showpoint<<setprecision(2)<<meter<<" meters in "<<time<<" seconds!";
    }
    else if(choice==2){
        meter=spAir*time;
        cout<<"Sound traveled: "<<fixed<<showpoint<<setprecision(2)<<meter<<" meters in "<<time<<" seconds!";
    }
    else if(choice==3){
        meter=spHelium*time;
        cout<<"Sound traveled: "<<fixed<<showpoint<<setprecision(2)<<meter<<" meters in "<<time<<" seconds!";
    }
    else if(choice==4){
        meter=spHydro*time;
        cout<<"Sound traveled: "<<fixed<<showpoint<<setprecision(2)<<meter<<" meters in "<<time<<" seconds!";
    }

    //Process values -> Map inputs to Outputs

    //Display Output

    //Exit Program
    return 0;
}