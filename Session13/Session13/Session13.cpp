// Session13.cpp : Defines the entry point for the console application.
// Bubble Sort ^_^

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, a[200], s, x = 0;
	printf("Enter the size of the array: ");
	scanf_s("%d", &s);
	printf("Enter the elements: \n");
	for (i = 0; i < s; i++)
		scanf_s("%d", &a[i]);
	printf("\nSorting. ");
	for (i = 0; i < s; i++)
	{
		for (j = 0; j < s - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
		}
	}
	printf("\nSorting done.");
	printf("After sorting: ");
	for (i = 0; i < s; i++)
	{
		printf("\n%d",a[i]);
	}
	_getch();
}
