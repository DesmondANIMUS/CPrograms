// Session15.cpp : Defines the entry point for the console application.
// Matrix addition / subtraction

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int a[10][10], b[10][10], c[10][10], i, j, x, y;
	printf("Enter the numberof rows of the matrices: ");
	scanf_s("%d", &x);
	printf("Enter the numberof columns of the matrices: ");
	scanf_s("%d", &y);
	
	printf("Enter the values for matrix 1: \n");
	for (i = 0;i < x;i++)
	{
		for (j = 0;j < y;j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	
	printf("\nEnter the values for matrix 2: \n");
	
	for (i = 0;i < x;i++)
	{
		for (j = 0;j < y;j++)
		{
			scanf_s("%d", &b[i][j]);
		}
	}
	for (i = 0;i < x;i++)
	{
		for (j = 0;j < y;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\nAnd the values after addition are: \n");

	for (i = 0;i < x;i++)
	{
		for (j = 0;j < y;j++)
		{
			printf("%d", c[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	_getch();
}

