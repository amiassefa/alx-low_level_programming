#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
**/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("%s%d%s", "Last digit of ", n, " is ");
	if (lastDigit > 5)
		printf("%d%s", lastDigit, " and is greater than 5\n");
	else if (lastDigit == 0)
		printf("%d%s", lastDigit, " and is 0\n");
	else if (lastDigit < 6 && lastDigit != 0)
		printf("%d%s", lastDigit, " and is less than 6 and not 0\n");
	return (0);
}
