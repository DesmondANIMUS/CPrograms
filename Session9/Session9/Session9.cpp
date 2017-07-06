// Session9.cpp : Defines the entry point for the console application.
//

//void fibo(int size);
#include <stdio.h>
#include "stdafx.h"
void fibo(int);
	
//int a=0,b=1;

int main()
{
	printf("0 1 ");
	fibo(10);
	return 0;
}

void fibo(int size)
{
	static long int a = 0, b = 1;
	int c;
	if (size>0)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld ", c);
		fibo(size - 1);
	}
}