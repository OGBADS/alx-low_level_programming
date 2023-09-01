#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the character of c to stdout
 * @c: the character
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set approprietely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
