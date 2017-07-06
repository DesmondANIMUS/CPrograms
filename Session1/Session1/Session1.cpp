// Session1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int a, b, c;
	system("cls");
	cout << "Enter 1: ";
	cin >> a;
	cout << "\nEnter 2: ";
	cin >> b;
	cout << "\nEnter 3: ";
	cin >> c;
	if ((a > b) && (a > c))
		cout << "\n1 is the greatest";
	else if ((b > a) && (b > c))
		cout << "\n2 is the greatest";
	else
		cout << "\n3 is the greatest";
	_getch();
}
