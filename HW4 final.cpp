#include <iostream>
#include <fstream>



using namespace std;

void extract(ifstream& read, ofstream& write);

int main()
{
	ifstream read;
	ofstream write;
	
	read.open("grades.dat");
	write.open("Grades Calculated.dat");

	if (read.fail())
	{
		cout << "ERROR: Cannot read file \n";
		exit(1);
	}
	
	if (write.fail())
	{
		cout << "ERROR: Cannot create/write to  file \n";
		exit(1);
	}
	
	extract(read, write);

	cout << "\nGrade file transfer success\n";
	
	read.close();
	write.close();

	return 0;
}


void extract(ifstream& read, ofstream& write)
{
	
	string last, first;
	char a;

do
	{
	
	double final=0.0;
	
	read>>last>>first;
	write<<last<<" "<<first<<" ";
	
	int grade=0;
	
	for(int x=0; x<10; x++)
	{
		read>>grade;
		final = grade + final;
		write<<grade<<" ";
	}
	
	write << (final/1000)*100 <<"%";
	write << endl;
	
	read.get(a);
	
	}while(a == '\n');
}

