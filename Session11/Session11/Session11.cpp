// Session11.cpp : Defines the entry point for the console application.
// Armstrong number

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>


void main()
{
	int i, x = 1, n, c, r, t;
	printf("Enter the number: ");
	scanf_s("%d", &n);
	c = n;
	for (i = 0; i < n; i++)
	{
		r = n % 10;
		t = r*r*r;
		x = x + t;
		n = n / 10;
	}
	if (x == c)
		printf("\nYes, it is an armstrong number!");
	else
		printf("\nNo, its not an armstrong number.");
	_getch();
}
