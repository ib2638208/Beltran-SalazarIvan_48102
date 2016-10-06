/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on September 29th, 2016, 12:00 PM
   Purpose:  Create a program that generates two random numbers and asks for an answer.
 */

//System Libraries
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int num1,num2, ans;
    srand (time(NULL));
    num1=rand()% 1000+1;
    num2=rand()% 1000+1;
   
    //Input values
    cout<<"Solve this problem";
    cout<<"  "<<num1;
    cout<<" + "<<num2<<" : ";
    cin>>ans;
    //Process values -> Map inputs to Outputs
 
    //Display Output
 if (ans==num1+num2){
   cout<<"You got the problem right!";
   }
   else if(ans!=num1+num2){
   cout<<"You got the problem wrong! The right answer is :"<<num1+num2;
   }
    //Exit Program
    return 0;
}