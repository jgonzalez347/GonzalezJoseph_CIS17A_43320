/* 
 * File:   main.cpp
 * Author: JosephGonzalez
 * Created on March 03, 2020, 3:00 PM
 * Purpose:  Use a binary search on an array of strings. Inside this project folder 
 *           is a text file with 30 random student names. The text file will be
 *           displayed before it is sorted and saved into a string array. 
 *           You will be able to search for a student in the sorted array
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
#include <fstream>  // 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void wrtFile (fstream & inputIO, string docName, int size); // write data to file test idea
void rdFile(fstream & inputIO,string docName,string array[],int size);//Read Student Names into array
void prntArr(string[],int);                 //Print the array
void srtArry(string[],int);                 //Sort the array
int schArry( string arr[],int size,string value);            //Search the array using Binary Search


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int AMOUNT = 30; // Names in the Text file, size of the array
     int nmFound;         // Hold search value index 
    char docName[] = {"RandomStudentNames.txt"};
    char select; // value to see sorted array
    string student[AMOUNT];
    string srchNme;
    fstream inputIO;
    
    //Initialize or input i.e. set variable values
  cout <<"Inside this project folder is a text file with 30 random student names." << endl;
  cout <<"\tThese are the contents of the text file." << endl<< endl; 
  
  
    rdFile(inputIO,docName,student,AMOUNT);
  
 // print array
     prntArr(student,AMOUNT);      
 
//Sort the array
   srtArry(student,AMOUNT);                 

   cout << endl << endl <<"The array has been sorted."<< endl;
   cout << "Would you like to see the sorted array?" << endl;
   cout << "\t<Y> or <N> : ";
           cin >> select;
           
           switch(toupper(select))
           {            // print array
               case('Y'):       
                   for(int i=0; i<AMOUNT;i++){
                      cout<<"\t"<<i+1<<"  "<< student[i]<<endl;
                      }break;
               default: break; // did not want to see array
           }
    cout << "Enter a name to for look in array:  ";
    // previous input was a char
    cin.ignore();
    getline(cin,srchNme);

  
   
// search array
  nmFound = schArry(student,AMOUNT,srchNme);
//Map inputs -> outputs
  
switch(nmFound)
{
    case(-1): cout << "\n(" << srchNme <<  ") NOT found." << endl;
        break;
    
    default: cout << "\n(" << srchNme <<") was Found! At index ("<<nmFound +1 <<")" << endl;
        break;
}

    //Exit stage right or left!
    return 0;
}
//*****************************************************************************
//              Function Definition: rdFile
//*****************************************************************************
void rdFile(fstream & inputIO,string docName,string array[],int size){
    //Read Student Names into array

   inputIO.open(docName.c_str(),ios::in);
    for(int i=0;i<size;i++){
      getline(inputIO,array[i]);
    }
   
   inputIO.close();
}
//*****************************************************************************
//              Function Definition: prntArr
//*****************************************************************************
void prntArr(string a[],int size){                 
      //Print the array  
    for(int i=0;i<size;i++){
        cout << a[i]<< ", ";
    }    
    cout <<"\b\b "; 
    //cout << "AAAAAAAA" <<endl;
    
}
//*****************************************************************************
//              Function Definition: srtArry
//*****************************************************************************
void srtArry(string arr[],int size){
    //Sort the array
    
    for(int counter=0;counter<size-1;counter++){
        string max = arr[counter];
        int indx=counter;
        //Find max in the list
        for(int i=counter+1;i<size;i++){
            if(arr[i]<max){
                max=arr[i];
                indx=i; 
            }
        }
        //Swap with max
        string temp =  arr[counter];
        arr[counter] = arr[indx];
        arr[indx] = temp;
    }      
}  


//*****************************************************************************
//              Function Definition: schArry
//*****************************************************************************
int schArry( string arr[],int size,string value)      
{
                    //Search the array using Binary Search
   int first=0,     //First Array Element, lower bound for the search updated when reduced by the < by half
       last=size-1, //Last Array Element upper range for the search
       middle=0,    //Midpoint Position to search each half
       ntFound = -1;// Flag Value if search has unsuccessful results 
    do{
        middle=(last+first)/2;
        if(arr[middle]==value){
            return middle;
        }
        if(arr[middle]<value){
            first = middle+1;
        }else{
            last  = middle-1;
        }
    }while(first<=last);
    
    
    return ntFound;
}


//void wrtFile (fstream & inputIO, string docName, int size)
//{
//    const char captConv = 32;
//    char letter= 65;
//    inputIO.open(docName,ios::out);
//    for (int i =0; i<size;i++,letter++){
//    inputIO << letter << " " << static_cast<char>(letter+captConv) << endl; 
//    }
//    inputIO.close();
//}