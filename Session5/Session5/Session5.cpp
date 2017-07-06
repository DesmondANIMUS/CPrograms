// Session5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int n, c = 0;
	printf("Enter the number: ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		c = c + (n % 10);
		n = n / 10;
	}
	printf("\nSum of the digits = %d", c);
	_getch();
}