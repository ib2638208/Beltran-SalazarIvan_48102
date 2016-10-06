/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  Create program that asks which monthly plan they use and how many hours they consumed, then display their monthly bill
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
    float bill,hour,min;
    int choice;
    string name;
    //Input values
    cout<<"Enter your name: ";
    cin>>name;
    
    cout<<"Package 1: For $9.95 per month 5 hours of call time are provided. Additionalusage costs $0.08 per minute."<<endl;
    cout<<"Package 2: For $14.95 per month 10 hours of call time are provided. Additional usage costs $0.06 per minute."<<endl;
    cout<<"Package 3: For $19.95 per month unlimited call time is provided"<<endl;
    cin>>choice;
    //Process values -> Map inputs to Outputs
    

    //Display Output
    if(choice==1){
        cout<<"How many hours were used?"<<endl;
        cin>>hour;
        bill=9.95+((hour-5)*4.8);
        cout<<name<<", your total monthly bill is $"<<fixed<<showpoint<<setprecision(2)<<bill;
    }
    else if(choice==2){
        cout<<"How many hours were used?"<<endl;
        cin>>hour;
        bill=14.95+((hour-10)*3.6);
        cout<<name<<", your total monthly bill is $"<<fixed<<showpoint<<setprecision(2)<<bill;
    }
    else if(choice==3){
        cout<<"How many hours were used?"<<endl;
        cin>>hour;
        bill=19.95;
        cout<<name<<", your total monthly bill is $"<<fixed<<showpoint<<setprecision(2)<<bill;
    }
    else if (choice<1 ||choice>3){
        cout<<"Thats an invalid choice!";
    }
    //Exit Program
    return 0;
}