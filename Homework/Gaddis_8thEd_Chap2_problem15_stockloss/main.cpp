/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ivan Beltran-Salazar
 * Purpose: Create a program that displays total paid for stocks, total amount received for selling the stock, and total amount of money lost
 *
 * Created on September 20, 2016, 8:43 PM
 */

#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int nStock=600;
    float bPrice=21.77f, sPrice=16.44f; 
  //Input values
    float totPaid=bPrice*nStock;
    float totSale=nStock*sPrice;
    float amoLoss=totPaid-totSale;
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"Kathryn bought "<<nStock<<" shares at a price of $"<<bPrice<<" each, which is a total of $"<<totPaid<<"."<<endl;
    cout<<"Kathryn sold the same amount of stock at a price of $"<<sPrice<<" each, which sold for a total of $"<<totSale<<"."<<endl;
    cout<<"This came to a grand loss of $"<<amoLoss<<", poor Kathryn."<<endl;
    //Exit Program
    return 0;
}
