#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - a function that allocates memory using malloc.
 * @b: size of memory block to be allocated
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
