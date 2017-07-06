// Session10.cpp : Defines the entry point for the console application.
 // Prime number

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int prime(int);
void main()
{
	int i, n, flag = 0, s1 = 0, s2 = 0;
	printf("Enter the range: ");
	scanf_s("%d", &n);
	printf("\nPrime numbers: ");
	for (i = 1; i <= n; i++)
	{
		flag = prime(i);
/*		if (flag == 0)
		{
			printf("\n%d: ", i);
			printf("Not a Prime number\n"); 
			s1++;
		}
*/		
   	 if(flag == 1)
		{
			printf("\n%d ", i);
		//	printf("Prime Number ^_^"); s2++;
		}
	}
//	printf("\nTotal number of Prime numbers in range: %d", s2);
//	printf("\nTotal number of Constants in range: %d", s1);
	_getch();
}

int prime(int x)
{
	int i, flag = 0;
//	if (x == 1)
//		printf("\nA Co-Prime Number");

	for (i = 2; i < x; i++)
	{
		
		if (x % i == 0)
		{
			flag = 0;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	return flag;
}