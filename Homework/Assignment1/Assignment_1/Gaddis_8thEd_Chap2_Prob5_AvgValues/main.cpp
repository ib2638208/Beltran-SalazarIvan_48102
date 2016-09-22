/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ivan Beltran-Salazar
 *Purpose: Find the avg of 5 numbers
 * Created on September 13, 2016, 12:24 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2, num3, num4, num5;
    float avg, stDev;
    
    cin>>num1>>num2>>num3>>num4>>num5;
    avg=(num1+num2+num3+num4+num5)/5;
    stDev=pow(((num1-avg)* (num1-avg)+ (num2-avg)* (num2-avg)+ (num3-avg)* (num3-avg)+ (num4-avg)* (num4-avg)+ (num5-avg)* (num5-avg))/4, .5);
    cout<<"The input values = "<<num1<<", "<<num2<<", "<<num3<<", "<<num4<<", "<<num5<<" ."<<endl;
    cout<<"The mean of these values is "<<avg<<"."<<endl;
    cout<<"The standard deviation of  these 5 numbers is "<<stDev<<endl;
    
    return 0;
}

