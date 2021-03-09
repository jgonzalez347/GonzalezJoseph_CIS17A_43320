/* 
 * File:   main.cpp
 * Author: JosephGonzalez
 *
 * Created on March 01, 2020, 7:10 PM
 * Display the days in a given month, and take into account leap years
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
 //Declare all variables for this function   
 //Initialize all known variables   

    const int PMT_WDT = 27, //Const - for the prompt question border width  
              RLT_WDT = 31; //Const - for the results border width   
              
    
    const int CENTURY = 100, //Const - Hold the value for one century  
              FOURCNT = 400; //Const - hold value of four centuries
    
    //Const - Integer Values for each month of the year
    const int JAN = 1, FEB = 2, MARCH = 3, APRIL = 4, MAY = 5, JUNE = 6,
              JULY = 7, AUG = 8, SEPT = 9, OCT = 10,  NOV = 11, DEC =12;
    
          int month = 0,         //Input - hold month input from user
              year = 0 ,         //Input - hold year input from user
              dayMnth = 0,       //Output - hold the calculated days in month
              remandr = 0;     //CALC - for calculated remainder in years division

          bool leapYr = false; //Input - hold the results of leap year check
          
//Process Inputs to Outputs -> Mapping Process
//Maps known values to the unknown objectives
//Display the Inputs/Outputs
    cout << setw(PMT_WDT) <<"Enter a month (1 to 12): ";
    cin >> month;
    
    cout << setw(PMT_WDT)  << "Enter the Year: ";
    cin >> year;
 
    
    if (month == FEB){
            //Check if year meets first type of leap year condition, divided by 100 evenly
          remandr = year % CENTURY;
          if (remandr == 0){
                    //Check if year meets next type of leap year condition divided by 400
                    remandr = year % FOURCNT;
                    if (remandr == 0){
                      //First type of Leap Year is true 100 & second leap year 400 is true 
                       leapYr = true;
                       dayMnth = 29;
                    }else{
                      //Year Was not divisible by 400
                       leapYr = false;
                       dayMnth = 28;
                     }      
           }else{// First type of Leap year was false, proceed to check second type
                //Year Was not evenly divisible by 100
                //Now we will check if the year is a 4 divisible leap year

                 remandr = year % 4;
                 //Year evenly divided by 4 is true
                if(remandr == 0){
                   leapYr = true;
                   dayMnth = 29;
                 //Year evenly divided by 4 is false
                 }else{
                   leapYr = false;
                   dayMnth = 28;
                  }
             }
    }else{// Month was a other than 2(feb) 
        switch (month)
           {
                case(JAN): dayMnth = 31;
                           break;
             // No Feb Case, since we test for Leap Year.
              case(MARCH): dayMnth = 31; 
                           break;
              case(APRIL): dayMnth = 30; 
                           break;
                case(MAY): dayMnth = 31; 
                           break;
               case(JUNE): dayMnth = 30; 
                           break;
               case(JULY): dayMnth = 31; 
                           break;
                case(AUG): dayMnth = 31; 
                           break;
               case(SEPT): dayMnth = 30; 
                           break;
                case(OCT): dayMnth = 31; 
                           break;
                case(NOV): dayMnth = 30; 
                           break;
                case(DEC): dayMnth = 31; 
                           break;
                 default:  dayMnth = 99;
                           break;
                          } 
    }
     cout << setfill('=') << setw(RLT_WDT) << "=" << setfill(' ') << endl;
     cout << dayMnth <<" days"<<(leapYr?"\t\tLeap Year":"\t\tNot a Leap Year") << endl;
     cout << setfill('=') << setw(RLT_WDT) << "=" << setfill(' ') << endl;
     
     //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

