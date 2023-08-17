#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= -1;
		num = n;
		putchar('-');
	}
	num /= 10;
	if (num != 0)
		print_number(num);
	putchar((num % 10) + '0');
}
