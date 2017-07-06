// Session19.cpp : Defines the entry point for the console application.
// String functions

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string.h>
#include <process.h>

using namespace std;

void main()
{
	int choice; char One[20], Two[20];
	do
	{
		cout << "1. Copy\n";
		cout << "2. Compare\n";
		cout << "3. Concatinate\n";
		cout << "4. Check Length\n";
		cout << "5. Exit\n";
		cout << "\n\nMake your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "\nEnter the string: ";
			cin >> One;
			strcpy_s(Two, One);
			cout<<"Copied contente: "<< Two; break;
		
		case 2: cout<< "\nEnter first string: ";
			cin >> One;
			cout << "\nEnter second string: ";
			cin >> Two;
			if (!(strcmp(One, Two)))
			{
				cout << "\nStrings are same"; 
				break;
			}
			else
			{
				cout << "\nStrings are not same"; 
				break;
			}

		case 3: cout << "\nEnter first string: ";
			cin >> One;
			cout << "\nEnter second string: ";
			cin >> Two;
			strcat_s(Two, One);
			cout << "\nResulting String: " << Two; break;

		case 4: cout << "\nEnter the string: ";
			cin >> One;
			choice = strlen(One);
			cout << "String length: " << choice; break;

		case 5: exit(0);

		default: cout << "\nWrong choice. Try again. 1 = Yes:  ";
			cin >> choice;
		}
		
		cout << "\nTry again. 1 = Yes:  ";
		cin >> choice;
	} while (choice==1);
}

