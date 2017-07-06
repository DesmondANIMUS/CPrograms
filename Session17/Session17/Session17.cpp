// Session17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int x, y, i, j, k, m, n, a[10][10], b[10][10], c[10][10];
	printf("Enter the no of rows of first matrix: ");
	scanf_s("%d", &x);
	printf("\nEnter the no of columns of first matrix: ");
	scanf_s("%d", &y);
	printf("\nEnter the no of rows of second matrix: ");
	scanf_s("%d", &m);
	printf("\nEnter the no of columns of second matrix: ");
	scanf_s("%d", &n);
	printf("\nEnter the elements of first matrix: ");
	for (i = 0;i < x;i++)
	{
		for (j = 0;j < y;j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("\nEnter the elements of second matrix: ");
	for (i = 0;i < m;i++)
	{
		for (j = 0;j < n;j++)
		{
			scanf_s("%d", &b[i][j]);
		}
	}

	if (x == n)
	{
		for (i = 0;i < x;i++)
			for (j = 0;j < n;j++)
				c[i][j] = 0;

		for (i = 0;i < x;i++)
		{
			for (j = 0;j < n;j++)
			{
				for (k = 0;k < y;k++)
				{
					c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
				}
			}
		}

		printf("\nAnswer is: ");
		for (i = 0;i < x;i++)
		{
			for (j = 0;j < n;j++)
			{
				printf("%d", c[i][j]);
				printf(" ");
			}
		}
	}
	_getch();
}
