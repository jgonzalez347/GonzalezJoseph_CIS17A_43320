/* 
 * File:   main.cpp
 * Author: Joseph Gonzalez
 * Created on March 02, 2020, 7:30 PM
 * Purpose:  Convert Fahrenheit temperature reading to Celsius using function
 *          will loop automatically through 0°F -> 20°F and Celsius equivalent
 *           Gaddis_8thEd_Chap6_Prob7_CelsiusTempConversion
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  // I/O format functions
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
float Celsius (unsigned short int fTemp);

//Execution of Code Begins Here
int main(int argc, char** argv) {
  //Set the random number seed here
    
  //Declare all variables for this function
    unsigned short int tempF;    //Fahrenheit temperature
    unsigned short int prtWdth;  //prompt Width value to align input/output using  setwidth
    char maxVal;                 //Max value for the loop iterations
    char precDgt;                //Number of digits of precision for temp 
 
  //Initialize all known variables
    tempF   = 0;    
    prtWdth = 10;
    
    maxVal  = 20;
    precDgt = 2;
    
  //Process Inputs to Outputs -> Mapping Process
  //Maps known values to the unknown objectives
    
    cout << "This program Converts Fahrenheit temperature to Celsius using a function and" << endl;
    cout << "will loop automatically through 0°F -> 20°F and display Celsius equivalent." << endl << endl;
    
 
               cout <<"Fahrenheit°"<<"\tCelsius°" << fixed << setprecision(precDgt)<<endl ;
   
  //Display the Inputs/Outputs
    for(int i=0; i<=maxVal;i++,tempF++){
        cout <<setw(prtWdth)<<tempF<<"\t" << Celsius(tempF)<< endl;
        }
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Convert Fahrenheit temp to Celsius temp
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float Celsius (unsigned short int fTemp)
{
    float celEqvl = 0;
    
    celEqvl = ((static_cast<float>(fTemp)-32)*5)/9;
    
    return celEqvl; 
}