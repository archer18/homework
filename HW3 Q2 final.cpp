/* 
Alexander Archer
Homework 3, Problem #4
C++ 1230 T/Th
2/22/2018
*/

#include <iostream>
#include <climits>

using namespace std;

int num, qtr, dime, penn, CoinValue, AmtLeft;
string ans;			//string to accept more than just Y/y

//FUNCTION SECTION
void ComputeCoins (int CoinValue, int &num, int &AmtLeft)
{
  num = AmtLeft / CoinValue;
  AmtLeft = AmtLeft - (num * CoinValue);
  return;
}
/*void ComputeCoins(int CoinValue, int& num, int& AmtLeft);
  PreCond:   0 < AmtChange < 100
             0 <= AmtLeft < 100
  PostCond: num has been set equal to the max number of coins of denomination CoinValue cents
            that can be obtained from AmtLeft. Additionally, AmtLeft has been decreased
            by the value of the coins, that is, decreased by num*CoinValue */


//MAIN CODE
int main ()
{
  cout << "    ===========================================\n"; // TITLE SEQUENCE
  cout << "    [            Change Calculator            ]\n";
  cout << "    ===========================================\n" << endl << endl;
  cout << "  Caculator will accept an amount of change between 0-100\n"; // USER INSTRUCTIONS
  cout << "  then return the amount of coins to make change.\n" << endl;

  do // main loop to repeat full calculation with new change amount
    {
      do // second loop to correct user error for change input
	{
	  cout << "Please enter the amount of change:  ";
	  cin >> AmtLeft;

	  while (cin.fail ())	// check to confirm user only inputs numbers
	    {
	      cin.clear ();	// clear input buffer to restore cin to a usable state
	      cin.ignore (INT_MAX, '\n');	// ignore last input
	      cout << "\nA number is the only valid input for change.\n";
	      cout << "Enter a number:  ";
	      cin >> AmtLeft;
	    }

	  if ((AmtLeft < 0) || (AmtLeft > 100)) // User insctructions to fix error
	    {
	      cout << "\nPlease limit amount of change between 0-100." << endl;
	    }
	}
      while ((AmtLeft < 0) || (AmtLeft > 100)); // loop repeats if user inputs anything outside of 1-100

// FUNCTION CALLS + settings coin quantities
      ComputeCoins (25, num, AmtLeft);
      qtr = num;
      ComputeCoins (10, num, AmtLeft);
      dime = num;
      ComputeCoins (1, num, AmtLeft);
      penn = num;

// Final display of results
      cout << endl << "Coins needed to make change.\n";
      cout << " - " << qtr << " quarter(s)\n";
      cout << " - " << dime << " dime(s)\n";
      cout << " - " << penn << " penny (pennies)\n" << endl;

// User question to repeat
      cout << "Repeat change calculation? ";
      cin >> ans;
      cout << endl;
    }
  while ((ans == "Y") || (ans == "y") || (ans == "yes") || (ans == "Yes"));
  // will loop IF string is any of the above

  return 0;
}