// Session7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int x, n = 0;
	printf("Enter the value of x: ");
	scanf_s("%d", &x);
	while (x != 0)
	{
		n = n * 10;
		n = n + (x % 10);
		x = x / 10;
	}
	printf("\nAnswer is: %d", n);
	_getch();
}