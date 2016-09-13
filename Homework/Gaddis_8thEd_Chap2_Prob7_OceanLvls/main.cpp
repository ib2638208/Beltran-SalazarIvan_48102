/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GaddisChp2Prob7Oceanlvl.cpp
 * Author: Ivan Beltran-Salazar
 *
 * Created on September 13, 2016, 11:47 AM
 * Purpose: To calculate when homeowners in Riverside will have beach front property.
 */

#include <iostream>

using namespace std;

/*
 * 
 */
const float CNVMMFT=304.8f;//Conversion MM to FT
const float CNVMMM=1000.0f;//conversion for MM to meters
int main(int argc, char** argv) {
     float rate= 1.5f; // Sea level Rise in mm per year
    int nYear1=5, nYear2=7, nYear3=10; //years we gotta calc
    float rise1, rise2, rise3; //3 different levels of height as time goes
    int nYrBch; //number of years before ur home is beachfront property
    float eleRiv=860.0f;// Elevation of Riverside in Feet
    rise1=rate*nYear1;
      rise2=rate*nYear2;
      rise3=rate*nYear3;
      nYrBch=eleRiv/rate*CNVMMFT;
      
    cout<<"The rate of sea level rise = "<<rate<<" mm/year."<<endl;  
    cout<<"The ocean rose "<<rise1<<" millimiters in "<<nYear1<<" years."<<endl;
    cout<<"The ocean rose "<<rise2<<" millimiters in "<<nYear2<<" years."<<endl;
    cout<<"The ocean rose "<<rise3<< " millimiters in "<<nYear3<< " years."<<endl;
    cout<<"In "<<nYrBch<<" years, Riverside will have beachfront property."<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" meters."<<endl;
    return 0;
}

