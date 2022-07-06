#include<stdio.h>
#include "main.h"

/**
*positive_or_negative -check a number is either positive or negative
*Return: Always 0 (Success)
**/

void positive_or_negative(int i)
{
	int n=i;

	if (n > 0)
		printf("%d%s", n, " is positive\n");
	else if (n == 0)
		printf("%d%s", n, " is zero\n");
	else
		printf("%d%s", n, " is negative\n");
}
