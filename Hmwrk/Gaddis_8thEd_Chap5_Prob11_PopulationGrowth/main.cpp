/* 
 * File:   main.cpp
 * Author: JosephGonzalez
 *
 * Created on March 02, 2020, 5:00 PM
 * Purpose: Calculate and display population growth with user specified
 *        starting size, daily population increase percent and number of days multiplied
 *        Gaddis_8thEd_Chap5_Prob11_PopulationGrowth
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  //I/O format functions
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants
const char PERCENT = 100; 
//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
   //Set the random number seed here
    
  //Declare all variables for this function
        unsigned int intPopl; // initial population size
        float pplPrct;        // population increase (%) percentage rate
        unsigned int numDays; // Number of days of population growth ( non negative)
        float calcPop;        // calculated population found by using intPopl & pplPrct & numDays
        unsigned short int prtWdth; // prompt Width value for set width to align input/output
   
  //Initialize all known variables
   calcPop = 0;
   prtWdth = 53;
   
   
  //Process Inputs to Outputs -> Mapping Process
  //Maps known values to the unknown objectives
   
   cout << "This program will predict the growth of a population for a given number of days." << endl;
   cout << "\tTo accomplish this please enter the following data:" << endl <<endl ;
   
   
   
   cout << setw(prtWdth)<< "Enter initial Population size: ";
   cin >> intPopl;
   // Problem Specifies to input validate, not accept numbers less than 2
        while(intPopl < 2 )
        {
            cout << "\t<Please enter Value large than 1>" << endl;

            cout << setw(prtWdth)  << "Enter initial Population size: ";
            cin >> intPopl;
        }
   
   cout << "Enter the growth rate as a percent(10% would be 10): ";
   cin >> pplPrct;
     // Problem Specifies to input validate, only accept non-negative integers
        while(pplPrct < 0)
        {
            cout << "\t<Please enter a Positive Value>" << endl;
             cout << "Enter the growth rate as a percent(10% would be 10): ";
        cin >> pplPrct;
        }
   
   pplPrct = pplPrct/PERCENT; // Converting to percentage 
   
   cout << setw(prtWdth) << "Enter number of days to grow: ";
   cin >> numDays;
    // Problem Specifies to input validate, only accept positive integers
    while(numDays < 1 )
         {
             cout << "\t<Please enter Value large than 0>" << endl;

            cout << setw(prtWdth) << "Enter number of days to grow: ";
            cin >> numDays;
         }
    calcPop =  intPopl;
   
     //Display the Inputs/Outputs
    cout << fixed << setprecision(2) << endl;
    for (int count =0; count <numDays;count++)
    {
        calcPop = calcPop + (calcPop*pplPrct);
        cout <<"\tDay ("<< count+1<< ") of population: " << calcPop << endl;
    }
   

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}