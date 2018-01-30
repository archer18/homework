/* 
Alexander Archer
C++ T,R 1230 
1/29/2018
Homework problem #2
*/

#include <iostream>

using namespace std;

int main()
{
     char ans; // answer to repeat code or not
    
    cout << "[---<<<   The TEN Number Sum'er   >>>---]\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "This program will accept 10 numbers and output various sums\n";
    cout << "Program will only accept integers. Do not input decimals or fractions\n"<<endl; //introduction and instructions
    
    do // do loop to ensure main program runs before loop conditions are met
    {
    
    /*
    a = array size
    c = array access variable
    x = seperate varible to display number input, starting at 1
    varibles are inside do loop to reset numbers before repeated calculation
    */
    int a=10, c=0, PosSum=0, NegSum=0, AllSum=0, x=1; 
    int UserNum [a]; //start array size according to varible = a
    
    cout << "Please enter the numbers\n";
       
    for (c=0; c<10; c++) //the loop to have user input 10 numbers
    {
        cout << "Number " << x++ << ".  ";
        cin >> UserNum[c]; //inputs users data into array block c
    }

    for (c=0; c<10; c++) // loop for positive integer calc
    {
       if (UserNum[c]>0) // if the number is positive, then add it
       PosSum += UserNum[c]; // any positive number found in array block x will be part of the positive sum
    }
    
    for (c=0; c<10; c++) // loop to negative integer calc 
    {
       if (UserNum[c]<0) // if number is negative, then add it
       NegSum += UserNum[c]; // any negative number found in array block x will be part of negative sum 
    }
    
    for (c=0; c<10; c++) // loop for ALL integer sum calc 
    {
       AllSum += UserNum[c]; // each block in array from 0-9 will be added to get all sum
    }
    cout << "\nSum of all Positive numbers is  " << PosSum <<endl; // positive integer sum displayed
    cout << "Sum of all Negative numbers is  " << NegSum <<endl; // negative integer sum displayed
    cout << "Sum of all numbers is  " << AllSum <<endl; // all integer sum displayed
    cout << "\nRestart calculation? Y or N" <<endl;
    cin >> ans; // user input into char 'ans'
    cout <<endl<<endl;
    
    }
    
    while ((ans == 'y') || (ans == 'Y')); // loop comfirmation via user input into char 'ans'
   
  
    return 0;
}
