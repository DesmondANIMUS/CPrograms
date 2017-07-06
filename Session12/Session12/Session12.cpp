// Session12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int x;
	printf("Enter the number: ");
	scanf_s("%d", &x);
	if (x % 2 == 0)
		printf("It is an Even number");
	else
		printf("It is an Odd number");
	_getch();
}
