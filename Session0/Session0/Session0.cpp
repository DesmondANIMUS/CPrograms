// Session0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float p, r, t, si;
	cout << "Enter the Principal amount: ";
	cin >> p;
	cout << "Enter rate of interest: ";
	cin >> r;
	cout << "Enter time period in years: ";
	cin >> t;
	si = p*r*t / 100;
	cout << "Answer is: "; cout<< si;
	return 0;
}
