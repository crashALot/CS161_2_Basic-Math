/******************************************************
**Author:      Glenn Kiefer
**Date:        04/10/2018
**Description: This program will prompt the user for
**             five numbers, average the numbers, and
**             output the result to console   
******************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  double avg, num1, num2, num3, num4, num5;

    // Request user input for 5 numbers
    cout << "Please enter five numbers." << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
 
    //Calculate average of user input 
    avg=(num1+num2+num3+num4+num5)/5;
 
    //Output result from averaging equation
    cout << "The average of those numbers is: " << endl;
    cout << avg << endl;

  return 0;
}	
