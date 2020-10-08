// ASProjectTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Aswin Shaji COSC 1436-73426

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	int array[25];
	int a, b, c, d, i; // Variable declaration

	do // Accept the input from the user
	{
		cout << "Enter the number of hours:" << endl;
		cin >> a;
		if (a > 10)
		{
			cout << "Hour cannot be greater than 10" << endl; // Hour should be limited to 10 hours
		}
	} 
	while (a > 10); 
	for (i = 0; i < 25; i++)
	{
		array[i] = 0;
	}
	c = a * 60 / 5; // Calculation of maximum floor change
	int tp[110];
	int e = 0;
	srand(time(NULL));
	for (i = 0; i < c; i++)
	{
		b = rand() % 25 + 1; // Making random floor numbers
		tp[e++] = b;
	}
	int temp, temp1;
	temp = tp[0]; // Storing the first floor
	array[temp - 1] = array[temp - 1] + 1;
	for (i = 1; i <= c; i++) // Checking the floor up and down
	{
		temp1 = tp[i];
		if (temp1 == temp + 1)
		{
			array[temp1 + 1] = array[temp1 + 1] + 1; // Checking the floor up
			temp = temp1;
		}
		if (temp1 == temp - 1)
		{
			array[temp1 - 1] = array[temp1 - 1] + 1; // Checking the floor down
			temp = temp1;
		}
	}
	cout << endl;
	for (i = 1; i <= 25; i++) // Displaying the status
	{
		cout << i << " ";
		temp = array[i - 1];
		while (temp != 0)
		{
			cout << "*";
			temp = temp - 1;
		}
		cout << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
