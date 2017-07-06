// Session22.cpp : Defines the entry point for the console application.
// Accessing members of a structure

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct BCA
{
	char name[20];
	long int roll;
	char blood;
	int age;
} b;

void getData();
void putData();
void main()
{
	printf("\t\t\t\tWelcome to program\n\n");
	printf("\nEnter data for the student \n");
	getData();
	putData();

	_getch();
}

void getData()
{
	printf("\nEnter name of the student: ");
	gets_s(b.name);
	printf("Enter roll number: ");
	scanf_s("%ld", &b.roll);
	printf("Enter blood type: ");
	cin >> b.blood;
	printf("Enter age of that student: ");
	scanf_s("%d", &b.age);
}

void putData()
{	
	printf("\n\n\n\t\t\t\tAnd here's all the data\n\n\n");
	printf("\nName of the student: ");
	puts(b.name);
	printf("Age of the student: %d", b.age);
	printf("\nBlood type of the student: %c", b.blood);
	printf("\nRoll number of the student: %ld", b.roll);
}
