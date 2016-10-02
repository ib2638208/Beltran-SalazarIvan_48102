/* 
   File:   main
   Author: Ivan Beltran-Salazar
   Created on August 29, 2016, 9:41 AM
   Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip> //Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration of Variables
    string movName;
    float aduTix,chiTix;
    float grossPr,paidDis,netBox;
    //Input values
    cout<<"What movie are you calculating for?";
    cin>>movName;
    cout<<"How many child tickets were sold?";
    cin>>chiTix;
    cout<<"How many adult tickets were sold?";
    cin>>aduTix;
            
    //Process values -> Map inputs to Outputs
    grossPr=chiTix*3.00+aduTix*6.00;
    paidDis=grossPr*.8;
    netBox=grossPr*.2;
    //Display Output
    cout<<"Movie name:                  "<<movName<<endl;
    cout<<"Adult Tickets Sold:            "<<aduTix<<endl;
    cout<<"Child Tickets Sold:             "<<chiTix<<endl;
    cout<<"Gross Box Office Profit:        $"<<fixed<<showpoint<<setprecision(2)<<grossPr<<endl;
    cout<<"Amount Paid to Distributor:     $"<<fixed<<showpoint<<setprecision(2)<<paidDis<<endl;
    cout<<"Net Box Office Profit:          $"<<fixed<<showpoint<<setprecision(2)<<netBox<<endl;
    //Exit Program
    return 0;
}