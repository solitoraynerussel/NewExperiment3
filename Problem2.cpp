#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	const int province = 3, week =7;
	char letter;

	int temp[province][week];
	
	cout << "Enter all temperature for a week of Province A, Province B, and then Province C. \n";
	cout << "--------------------------------------------------------------------------------\n";
	
	for(int i = 0; i < province; ++i)
	{
		for(int j = 0; j < week; ++j)
		{
		if(i + 1 == 1)
		{
			letter = 'A';
		}
		else if(i + 1 == 2)
		{
			letter = 'B';
		}
		else if(i + 1 == 3)
		{
			letter = 'C';
		}
		cout << "Province " << letter << ", Day " << j + 1 << " : ";
		cin >> temp[i][j];
		}
	}
	
	cout << "-------------------------------------";
	cout << "\n\nDisplaying Values:\n\n";
	cout << "-------------------------------------\n";
	
	for(int i = 0; i < province; ++i)
	{
		if(i + 1 == 1)
		{
			letter = 'A';
		}
		else if(i + 1 == 2)
		{
			letter = 'B';
		}
		else if(i + 1 == 3)
		{
			letter = 'C';
		}
		for(int j = 0; j < week; ++j)
		{
			cout << "Province " << letter << ", Day " << j + 1 << " = " << temp[i][j] << endl;
		}
	}
	
	getch();
	return 0;
}
