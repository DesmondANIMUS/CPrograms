// Session8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, k, c, x;
	int p, q, r, s;
//	auto AP = 0;
	printf("Enter limit: ");
	scanf_s("%d", &c);	

//	while (AP < 4)
//	{
		for (i = 0; i < c; i++)
		{


			for (k = c; k > i; k--)
			{
				printf(" ");
			}

			printf("*");

			for (j = 0; j < i; j++)
			{
				printf("*");
			}

			for (x = 0; x < i; x++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (p = 0; p <= c; p++)
		{
			for (q = 0; q < p; q++)
			{
				printf(" ");
			}

			for (r = c; r > p; r--)
			{
				printf("*");
			}

			for (s = c + 1; s > p; s--)
			{
				printf("*");
			}
			printf("\n");
		}
		
//		AP++;
	//}  
	_getch();
}
