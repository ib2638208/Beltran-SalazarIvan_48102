/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on September 29th, 2016, 12:00 PM
   Purpose:  Create a program that asks for a quantity and gives a price reduction accordingly.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int quant;
    int price=99;
    //Input values
    cout<<"Welcome to Ivans Software DDoS booter sale, price is 99$ per unit how many would you like?";
    cin>>quant;
    //Process values -> Map inputs to Outputs
    
    //Display Output
    if (quant<10){
    cout<<"Your price come to a total of $"<<quant*price;
    }
    else if(quant>=10 && quant<=19){
    cout<<"For buying "<<quant<<", you get a discounted price of "<<quant*price*.8;
    }
    //Exit Program
    return 0;
}