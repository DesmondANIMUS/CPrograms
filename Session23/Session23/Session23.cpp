// Session23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int x = 0;
	printf("Enter data below\n");
	while (x != 25)
		scanf_s("%d", &x);
	_getch();
}

