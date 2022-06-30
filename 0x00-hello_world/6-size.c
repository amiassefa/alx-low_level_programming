#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 **/
int main(void)
{
	printf("Size of char: %2d bytes \n", sizeof(char));
	printf("size of int: %2d bytes \n", sizeof(int));
	printf("size of long int: %2d bytes \n", sizeof(long int));
	printf("size of long long int: %2d bytes \n", sizeof(long long int));
	printf("Size of float: %2d bytes \n", sizeof(float));
}
