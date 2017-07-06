// Session21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int x[][4] = { {1,2,3,4} , {1,2,3,4} , {1,2,3,4} };
	int(*q)[4], *p;
	q = x; p = x;
	printf("\nAddress on p = %u", p);
	printf("\nAddress on q = %u", q);
	p++; q++;
	printf("\nAgain on p = %u", p);
	printf("\nAgain on q = %u", q);

	_getch();
}
