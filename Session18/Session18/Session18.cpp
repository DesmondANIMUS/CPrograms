// Session18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	int i, num, arr[20],size, flag = 0;
	printf("Enter size: ");
	scanf_s("%d", &size);
	printf("Enter elements: \n");
	for (i = 0;i < size;i++)
		scanf_s("%d", &arr[i]);
	do
	{
		printf("\nEnter element you wish to search: ");
		scanf_s("%d", &num);
		for (i = 0;i < size;i++)
			if (arr[i] == num)
			{
				flag = 0;
				break;
			}
			
			else
				flag = 1;
		
		if (flag == 0)
			printf("\nElement found");
		else
			printf("\nElement not found");
	} while (1);
	_getch();
}

