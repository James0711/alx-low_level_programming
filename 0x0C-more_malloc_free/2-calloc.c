#include "main.h"
#include <stdlib.h>

/**
 * _memset - A function that fills mnemory with a constant byte
 *
 * @s: string
 * @b: character
 * @n: integer
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}

/**
 * _calloc - A function that allocates memory for an array using malloc
 *
 * @nmemb: Number of array element
 * @size: size of elements
 *
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
