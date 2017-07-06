// Session6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int n, x;
	printf("Enter the value of x: ");
	scanf_s("%d", &x);
	n = x - 1;
	for (; n >= 1; n--)
		x = n*x;
	printf("\nAnswer is: %d", x);
	_getch();
}
