// Session24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	int *p, x, i = 0;
	printf("\t\t\t\tEnter limit: ");
	scanf_s("%d", &x);
	p = (int *) calloc(x, sizeof(int));
	if(p==NULL)
	{
		printf("\nNUll pointer error");
		_getch();
		exit(1);
	}
	printf("\n\t\t\tEnter data below \n");
	while(i<x)
	{
		scanf_s("%d", (p + i));
		i++;
	}

	printf("\t\tHere's the data that you entered: ");
	for (i = 0; i < x; i++)
	{
		printf("%d", *(p + i));
		printf(" ");
	}
	_getch();
}

