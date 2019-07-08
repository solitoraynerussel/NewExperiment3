#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double numbers[15];
	int smallest, largest;
	double sum;
	
	cout << "SMALLEST, LARGEST, TOTAL AND MEAN CALCULATOR!\n\n";
	
	for(int i = 0; i < 15; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> numbers[i];
	}
	cout << endl;
	largest = numbers[0];
	
	for(int i = 1; i < 15; i++)
	{
		if(largest < numbers[i])
		{
			largest = numbers[i];
		}
	}
	
	smallest = numbers[0];
	for(int i = 1; i < 15; i++)
	{
		if(smallest > numbers[i])
		{
			smallest = numbers[i];
		}
	}
	
	for(int i = 0; i < 15; i++)
	{
		sum += numbers[i];
	}
	
	cout << "The smallest integer is " << smallest << endl;
	cout << "The largest integer is " << largest << endl;
	cout << "The total sum of all integers is " << sum << endl;
	cout << "The average of all integers is " << sum/15 << endl;
	
	getch();
	return 0;
}
