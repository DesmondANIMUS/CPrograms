// Session16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int s[50][50], i, j, x;
	printf("Enter the total number of students: ");
	scanf_s("%d", &x);
	printf("\nNow enter the details -> \n");
	for (i = 0;i < x;i++)
	{
		printf("\nEnter roll number: ");
		scanf_s("%d", &s[i]);
		for (j = 1;j <= 5;j++)
		{
			printf("Marks for subject number %d: ",j);
			scanf_s("%d",&s[i][j]);
		}
	}

	printf("\n\t\t\tHere are the details: \n\n");
	
	for (i = 0;i < x;i++)
	{
		printf("\t\t\t");
		for (j = 0;j <= 5;j++)
		{
			printf("%d",s[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	_getch();
}