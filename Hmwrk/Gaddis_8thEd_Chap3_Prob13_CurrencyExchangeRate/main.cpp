/* 
 * File:   main.cpp
 * Author: JosephGonzalez
 *
 * Created on March 01, 2020, 4:00 PM
 * Purpose:  Convert U.S Dollar Amount to Japanese (yen) & European (Euros) 
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
    
    // As of 6/23/2020 current exchange rate 
    float YEN_PER_DOLLAR = 106.474; // equivalent value of 1 US Dollar to Yen
    float EUROS_PER_DOLLAR = 0.88; // equivalent Value of 1 US dollar to Euro
    
    float usaAmt;// User specified amount 
    
    //Initialize all known variables
    cout << "Enter an amount of US currency to be exchanged to Japanese(Yen) & (Euro)\n";
     cout <<"Current Exchange Rate: Yen ≈¥" << YEN_PER_DOLLAR << endl;
    cout <<"Current Exchange Rate: Euro ≈€" << EUROS_PER_DOLLAR << endl;
    cout << "US Dollar: $";
    
    cin >> usaAmt;
    
    //Process Inputs to Outputs -> Mapping Process (≈)
    //Maps known values to the unknown objectives
    
    cout << endl <<"US Dollar:     $"  <<fixed << setprecision(2) << usaAmt << endl;
    cout << "Japanese Yen:  ¥"<< fixed << setprecision(2) <<(usaAmt*YEN_PER_DOLLAR )<< endl;
    cout << "European Euro: €"<< fixed << setprecision(2) <<(usaAmt*EUROS_PER_DOLLAR )<< endl;
    
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
