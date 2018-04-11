// Alexander Archer
// 12 Apr 2018
// Homework #6
// C++ T/Th 12:30

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void remove_spaces(string &input);
//precondition: requires valid string input
//postcondition: reduces consecutive spaces to a singular space
void to_lower(string &input);
//precondition: requires valid string input
//postcondition: changes any capital letters to lower case
void first_capital(string &input);
//precondition: requires valid string input
//postcondition: capitalizes first letter in string
bool verify_input(string input);
//precondition: requires valid string input
//postcondition: returns true if string input is within required 1-100 range

int main ()
{

string input;

cout << "Program will automatically correct spaces and capitalization\n";
cout << "Limit input to 100 characters\n"<<endl;

do
{
    cout << "Please input sentence: \n";
    getline(cin,input);
    cout << endl << endl;
}while(!verify_input(input));

remove_spaces(input);
to_lower(input);
first_capital(input);

cout << "Corrected sentence: \n" << input << endl<< endl;

return 0;

}

void remove_spaces(string &input)
{
    int a=0, string_length;
    string_length=input.length();

        for(int i=0; i < string_length; i++)
    {
        if(input[i] == ' ')
        {
            for(int j=i+1; j< string_length; j++)
            {
                if(input[j] != ' ')
                {
                    a=j;
                    break;
                }
            }
            input.erase(i,(a-1)-i);
            string_length=input.length();
        }
    }
    return;
}

void to_lower(string &input)
{
    int string_length;
    string_length=input.length();

    for(int i=0; i < string_length; i++)
    {
        input[i] = tolower(input[i]);
    }
    return;
}

void first_capital(string &input)
{
    input[0]=toupper(input[0]);
}

bool verify_input(string input)
{
	if(input.empty() || input.length() > 100)
    {
      return false;
    }
    return true;
}
