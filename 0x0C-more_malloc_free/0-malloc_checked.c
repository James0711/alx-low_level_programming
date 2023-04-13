#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A function that allocate memory using malloc
 * @b: an integer / number of bytes
 *
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
