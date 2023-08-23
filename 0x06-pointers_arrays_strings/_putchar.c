#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character of c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}