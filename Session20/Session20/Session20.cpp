// Session20.cpp : Defines the entry point for the console application.
// Array of pointers

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int *p[5], a, b, c, d, i, e;
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	p[3] = &d;
	p[4] = &e;
	
	printf("Enter value for a: ");
	scanf_s("%d", &a);

	printf("\nEnter value for b: ");
	scanf_s("%d", &b);

	printf("\nEnter value for c: ");
	scanf_s("%d", &c);

	printf("\nEnter value for d: ");
	scanf_s("%d", &d);

	printf("\nEnter value for e: ");
	scanf_s("%d", &e);

	for (i = 0; i < 5; i++)
	{
		printf("\nAddress: %u", p[i]);
		printf("\nValue: %d", *p[i]);
	}

	_getch();
}
