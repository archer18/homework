#include <iostream>
#include <cstring>

using namespace std;

int main ()
{

const int cstring_size=20;

char input[cstring_size];
char swap[cstring_size];
int count=0, i=0;

cout << "input sentence ";
cin.get(input,cstring_size);
cout<<endl;

while(input[i] != '\0')
{
	count=i;
	
	if(input[i] == '.') 
	{ 
		int j=0;
		while(input[count] != '\0')
		{
			count++;
			swap[j]=input[count];
			j++;
		}
		
		cout << "midswap " << endl << "input = " << input << endl << "swap = " << swap <<endl<<endl;
				
		input[i+1]=' ';
		count=i+2;
		j=0;
			
		while(swap[j] != '\0') // garbled mess getting injected here...
		{
			input[count]=swap[j];
			j++;
			count++;
		}
	}
		
i++;

}	 	 	 

cout << "Final string values:"<< endl << "input cstring = " << input << endl << "swap cstring  = " << swap <<endl;

return 0;

}

