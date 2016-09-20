/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose: Iteration to find square root
 */

//System Libraries Here
#include <iostream> //Input Output objects
#include <iomanip>  //Format Library
#include <cstdlib>  //Random number seed
#include <cmath>    //Square Root Function
#include <ctime>    //Time to set random number seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float MAXRAND=pow(2,31)-1;//max signed positive value
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    float n, guess, r;
    float scale=90,shift=10;
    short counter=0;
    //Input or initialize values Here - float random number (10,100)
    //Integer random nmber rand()%cale+shift [10,100]
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //Display Initialization
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    
    //Process/Calculations Here
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Output Located Here
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<counter<<" pass[r,guess] = ["<<setw(7)<<r<<", "<<setw(7)<<guess<<"]"<<endl;
   
    
    //Second pass
    r=n/guess;
    guess=(guess+r)/2;
      counter+=1;
    //Output Located Here
    cout<<counter<<" pass[r,guess] = ["<<setw(7)<<r<<", "<<setw(7)<<guess<<"]"<<endl;
    
    r=n/guess;
    guess=(guess+r)/2;
      counter+=1;
    //Output Located Here
    cout<<counter<<" pass[r,guess] = ["<<setw(7)<<r<<", "<<setw(7)<<guess<<"]"<<endl;
    
    r=n/guess;
    guess=(guess+r)/2;
      counter+=1;
    //Output Located Here
    cout<<counter<<" pass[r,guess] = ["<<setw(7)<<r<<", "<<setw(7)<<guess<<"]"<<endl;
    
    r=n/guess;
    guess=(guess+r)/2;
      counter+=1;
    //Output Located Here
    cout<<counter<<" pass[r,guess] = ["<<setw(7)<<r<<", "<<setw(7)<<guess<<"]"<<endl;
    
    r=n/guess;
    guess=(guess+r)/2;
      counter+=1;
    //Output Located Here
    cout<<counter<<" pass[r,guess] = ["<<setw(7)<<r<<", "<<setw(7)<<guess<<"]"<<endl;
    
    cout<<"The sqrt ("<<n<<")"<<" = "<<sqrt(n)<<endl;
    

    //Exit
    return 0;
}