#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: array size
 * @c: char
 *
 * Return: A pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *str;

	str = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
