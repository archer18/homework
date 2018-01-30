/*
Alexander Archer
1/25/2017
c++ T,R 1230
Homework Problem #1

Calculation to provide:
    Metric ton converted to ounces
    How many cereal boxes it would take to weigh 1 metric ton */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int
main ()
{
  char Loop_Ans;		//final asnwer to loop entire code again
  do
    {
      char Gr_Weight_Ans;	// asnwer when weight is greater than 45
      char Ls_Weight_Ans;	//answer when weight is less than 1
      double qty_boxes_ton;	//number of boxes required to make a ton
      double oz_boxes, box_converted_ton, ton_in_oz;	//change to double in final code
      do
	{

	  cout << "\nHow much does one cereal box weigh in ounces?\n";
	  cin >> oz_boxes;
	  
	  if (oz_boxes > 45)	//checks user for inputting incorrect info
	    {
	      cout << "\nWeight input is far greater than average.\n";
	      cout << "Is box weight correct? Y or N\n";
	      cin >> Gr_Weight_Ans;
	      cout << endl;
	    }
	    
	  if (oz_boxes < 5)	//checks user for inputting incorrect info
	    {
	      cout << "\nWeight input is far less than average.\n";
	      cout << "Is weight correct? Y or N\n";
	      cin >> Ls_Weight_Ans;
	      cout << endl;
	    }
	    
	}
      while ((Gr_Weight_Ans == 'n' || Gr_Weight_Ans == 'N')
	     || (Ls_Weight_Ans == 'n' || Ls_Weight_Ans == 'N'));
      //possible asnwers from user to loop original weight question

      ton_in_oz = 35273.92; // 1 metric ton converted to ounces, used for calculations
      box_converted_ton = oz_boxes / ton_in_oz;	//caluclating a single box weight into tons from oz

      cout << "\nCereal box converted weight is " << box_converted_ton << " metric tons.\n";
      //unit conversion number, ounce to metric ton

      qty_boxes_ton = ton_in_oz / oz_boxes;
      cout << "Number of boxes required to make approximately 1 metric ton is " << round(qty_boxes_ton) << ".\n" <<endl;
      //displaying the number of boxes needed to make one metric ton

      cout << "Enter 'y' to run calculation again\n";	//User inputs Y or y to run program again
      cin >> Loop_Ans;
    }
    
  while ((Loop_Ans == 'y') || (Loop_Ans == 'Y'));	//loop input for non case sensitive Y
  
  return 0;
}
