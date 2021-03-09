/* 
 * File:   main.cpp
 * Author: JosephGonzalez
 *
 * Created on March 01, 2020, 2:12 PM
 * Purpose:  Convert Celsius temperature reading to Fahrenheit 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  // I/O format functions
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
   float celsTmp;
    
    //Initialize all known variables
    cout << "Enter a Celsius temperature reading to convert to Fahrenheit\n";
    cout << "Temperature: ";
    
    cin >> celsTmp;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    cout << endl <<"["  << celsTmp <<"°]Celsius is equivalent to (≈) [" 
         << fixed << setprecision(1) <<((celsTmp *9)/5 + 32) << "°F]" << endl;
    
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
