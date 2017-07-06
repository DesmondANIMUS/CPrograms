// Session4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void divide(double x, double y)
{
	cout << "Inside function\n";
	try
	{
		if (y == 0.0)
			throw y;
		else cout << "Division\n";
	}

	catch (double)
	{
		cout << "Caught double inside function\n";
		throw;  // Re-throwing double
	}

	cout << "End of function\n";
}

void main()
{
	system("cls");
	cout << "Inside main\n";
	try
	{
		divide(10.5, 2.0);
		divide(20.0, 0.0);
	}

	catch (double)
	{
		cout << "Caught double inside function\n";
	}

	cout << "End of main\n";

	_getch();
}