/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ivan Beltran-Salazar
 * Purpose: Create program that calculates the sale price with the markup of the price of the cost of production.
 * Created on September 20, 2016, 9:23 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float pCboard=12.67f;
    float markUp=1.40f;
    float sCboard=markUp*pCboard;
    cout<<"The cost of production for a circuit board at this electronic company is $"<<pCboard<<"."<<endl;
    cout<<"The markup of these circuit boards is 40%"<<"."<<endl;
    cout<<"The selling price of the circuit boards is $"<<sCboard<<"."<<endl;
    return 0;
}

