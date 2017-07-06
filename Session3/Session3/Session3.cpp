// Session3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int n, i, j, s, t[100], marks, total = 0;
	printf("Enter the number of students: ");
	scanf_s("%d", &n);
	printf("\nEnter the number of subjects: ");
	scanf_s("%d", &s);
	i = 0;
	while (i< n)
	{
		printf("\nFor student number: %d", i);
		for (j = 0; j < s; j++)
		{
			printf("\nEnter Marks for subject number %d: ", j);
			scanf_s("%d", &marks);
			total = marks + total;
		}
		printf("\nTotal marks in all subjects for student %d: ", i);
		printf(" = %d", total); 
		t[i] = total;
		total = 0;
		printf("\n");
		++i;
	}
	_getch();
}
