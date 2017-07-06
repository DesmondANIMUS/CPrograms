// Session14.cpp : Defines the entry point for the console application.
// Questions

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>
#include <process.h>

using namespace std;

void pass();
void Questions();
void main()
{
	pass();	
}

void pass()
{
	char a[50], b[50], ch = ' ', c[50], g, h = 0; int i;
	int j = 0; 
	for (i = 0; i < 1; i++)
	{
		cout << "Enter your passwowrd to proceed.\n";
		while (ch != 13)
		{
			ch = _getch();

			if (ch == 13)
			{
				a[j] = '\0';
				fflush(stdin);
				break;
			}

			a[j] = ch;
			j++;
			cout << 'X';
		}
		if (!strcmp("\0", a))
		{
			cout << "Enter something in the password area\n";
		}
		else
		{
			if (strcmp("I AM BATMAN!", a))
				cout << "\nSorry! Try again\n";
			else
			{
				cout << "\n\nWelcome here, how are you today? " << endl;
				Questions();
			}
		}
	}
	i = 0;
	for (int y = 0; y < 1; y++)
	{
		cout << "\nEnter your password\n";
		while (h != 13)
		{
			g = _getch();
			if (g == 13)
			{
				b[i] = '\0';
				break;
			}

			b[i] = g;
			i++;
			cout << 'X';
		}
		if (!strcmp("\0", b))
		{
			cout << "Enter something in the password area\n";
		}
		else
		{
			if (strcmp(a, b))
			{
				if (strcmp("I AM BATMAN!", b))
					cout << "\nSorry! Try again\n";
				else
				{
					cout << "\nWelcome here, how are you today? " << endl;
					Questions();
				}

			}
		}
	} i = 0;
	for (int x = 0; x < 1; x++)
	{
		cout << "\nPassword hint = nanannanananannanan BATMAN!! \n";
		cout << "\nLast chance kid\n";
		while (h != 13)
		{
			h = _getch();
			if (h == 13)
			{
				c[i] = '\0';
				break;
			}

			c[i] = h;
			i++;
			cout << 'X';
		}
		if (strcmp("I AM BATMAN!", c))
			exit(0);
		else
		{
			cout << "\nWelcome here, how are you today? " << endl;
			Questions();
		}
	}
}

void Questions()
{
	system("cls");
	cout << "Q1) Write a program for finding Prime numbers upto Nth term and represent them beautifully in a pattern.  " << endl;
	cout << endl;
	cout << "Q2) Write a program to find out sum of Prime Numbers upto Nth term also state which numbers are prime and which aren't." << endl;
	cout << endl;
	cout << "Q3) Write a program to get a 4 character input from user (Numbers and alphabets only)."<<endl<< "    And try and generate a string of 4 characters which matches the string entered by the user." << endl;
	cout << endl;
	cout << "Q4) Write a program to convert a message in a human un-readable form and simplify it as well. " << endl;
	cout << endl;
	cout << "Q5) Write a program to take student details and then update those details in ascending order.  " << endl;
	_getch();
	exit(0);
}