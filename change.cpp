/******************************************************
**Author:      Glenn Kiefer
**Date:        04/10/2018
**Description: This program will prompt the user for
**             an amount of cents less than one dollar.   
**             From this value, the minimum amount of  
**             change required to meet the value will
**             be output to consol.
******************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int cents, quarters, dimes, nickels, pennies;

    //Request user input
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> cents;
    
    //Calculate least number of change required given user input 
    quarters=cents/25;
    dimes=(cents%25)/10;
    nickels=((cents%25)-(dimes*10))/5;
    pennies=((cents%25)-(dimes*10)-(nickels*5))/1; 
    
    //Output to consol amount of change required
    cout << "Your change will be:" << endl;
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickels << endl;
    cout << "P: " << pennies << endl;

  return 0;
}	
