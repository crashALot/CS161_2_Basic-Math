/******************************************************
**Author:      Glenn Kiefer
**Date:        04/10/2018
**Description: This program will prompt the user for
**             a Celsius temperature, convert the  
**             value to Fahrenheit, and output to
**             consol.   
******************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  double cels, fahr;

    //Prompt user for input
    cout << "Please enter a Celsius temperature." << endl;
    cin >> cels;
   
    //Calculate Fahrenheit given Celsius value
    fahr=((9*cels)/5)+32; 
   
    //Output result to consol
    cout << "The equivalent Fahrenheit temperature is:" << endl;
    cout << fahr << endl;

  return 0;
}	
