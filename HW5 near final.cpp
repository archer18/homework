/*
Alexander Archer
HW5 Arrays
C++ T/Th 1230
3/3/2018
*/

#include <iostream>

using namespace std;

void insertionSort(int arr[], int L) // insertion sort function
{
   int i, temp, j;
   
   for (i = 1; i < L; i++)
   {
       temp = arr[i];
	   
       j = i-1;
 
       while (j >= 0 && arr[j] > temp)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
	   
       arr[j+1] = temp;
   }
}


int main()
{

int L=0; // L = Length of arrays

cout << " ----------------------------------------------\n";
cout << "|             Number Sorting Machine           |\n";
cout << " ----------------------------------------------\n";
cout << "This program will input up to 10 numbers and will output those numbers sorted\n"<<endl;
cout << "How many numbers would you like to have sorted?\n";
do
{
	cout << "Restrict input to 2-10\n";
	cin >> L;
}
while((L<2)||(L>10)); // will force user to make array that is not too large

int Unsort[L]; // arrays created based off user Length input
int Sort[L];

cout << "Input random numbers to be sorted \n";
for(int a=0;a<L;a++)
{
	cin>>Unsort[a]; //accepts user inputs for random numbers
}
cout << endl;

for(int a=0; a<L; a++) // unsort array copied into sort, to be sorted later
{
	int x;
	x=Unsort[a];
	Sort[a]=x;
}

insertionSort(Sort, L); // copied array to be sorted with the function call

cout << "Your numbers now sorted in ascending order\n"<<"    ";
for(int a=0;a<L;a++)
{
    cout<<Sort[a]<<" ";
}

return 0;
}