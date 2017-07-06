// Session2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// Session2
#include<stdio.h>
#include<conio.h>

void main()
{
	float ID, unit, price;
	printf("Enter consumer ID: ");
	scanf_s("%f", &ID);
	printf("\nEnter units used: ");
	scanf_s("%f", &unit);
	if ((unit>0) && (unit <= 200))
		price = 0.50*unit;
	else if ((unit > 200) && (unit <= 400))
		price = 100 + (1.00*(unit - 200));
	else if ((unit > 400) && (unit <= 600))
		price = 200 + (2.50*(unit - 400));
	else
		price = 300 + (4.0*(unit - 600));
	printf("\nYour electricity bill is: %f", price);
	_getch();
}

