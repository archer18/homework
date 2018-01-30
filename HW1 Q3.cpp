/*
Alexander Archer
C++ T,R 1230
1/29/2018
Homework Problem #3

Calulator to provide a final grade and total actual and possible points made.
Can input from 1-50 assignments.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "**************************************************\n";
    cout << "[>>>>----------- Grade Calculator -----------<<<<]\n";
    cout << "**************************************************\n"<<endl;
    cout << "Calculator will accept up to 50 assignments to calculate class grade.\n";
    cout << "   First input will be the 'actual' points made on an assignment\n";
    cout << "   Second input will be points 'possible' to make on the assignment\n" <<endl;
      
    char ans; 
    
    do 
    {
    
    int const r=2; // constant number of rows in array for possible and actual
    int c=0, n=1; // c=columns (user defined), n=displayed numbers
    double ActualSum=0.0, PossibleSum=0.0, FinalGrade=0.00;
    
  
    cout << "How many assignments would you like to input?  ";
    cin >> c;
    cout << endl;
    
    if ((c>0) && (c<51))
        {
        int n=1; // n=displayed number count, c=number of array columns/grades user decides
        double grades [r][c]; // build array size, r=2 rows and c=(# of user defined columns)
        
        
        cout << "Input Points from Assignments.\n"<<endl;
        
        for (int x=0; x<c; x++) // for loop to input grades
        {
            cout << "Exercise #" << n++ << "." << endl; //listing what exercise the input is on
            cout <<"  Actual Points:   "; 
            cin >> grades [0][x]; // inputting actual points made into row 0, column x
            
            cout << "  Possible Points: ";
            cin >> grades [1][x]; // inputting possible points made into row 1, column x
            cout << endl;
        }
        
        for (int x=0; x<c; x++) // for loop to calculate final numbers
        {
            ActualSum += grades [0][x]; // cacluating the sum of all actual grade inputs
            PossibleSum += grades [1][x]; // calculating the sum all possible grade inputs 
        }
        
        FinalGrade = ActualSum / PossibleSum; // calculating final grade (in decimal form, not percent)
        
        cout << "Points Achieved = " << ActualSum << endl; //total points made on assigments
        cout << "Points Possible = " << PossibleSum << endl; // total points possible
        cout << "Final Grade     = " << fixed << setprecision(2) << (100*FinalGrade) << "%" << endl<<endl; 
        // displays final grade converted to a percent with two decimal places
        }
        
        else  // else function if user inputs number of grades less than 1
        {
            cout << "Program requires number of assignments to be between 1 - 50.\nHow many assignments would you like to input?  "; 
            cin >> c;
            
            if (c<1)
            {
                cout << "If you are trying to input less than 1 grade, then you don't need a calculation.\n"; // if user inputs another 0, just for fun
            }
        }
        
        cout << "Repeat grade inputs? y or n \n"; // ask user to repeat entire program
        cin >> ans;
        cout <<endl<<endl;
    }
    while (ans == 'y'); // user answer to repeat program

    return 0;
}
