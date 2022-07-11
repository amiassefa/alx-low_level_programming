#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Alx  students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Holberton";

    printf("%s", s);
    
    rev_string(s);
    printf("\n%s\n", s);
    return (0);
}
