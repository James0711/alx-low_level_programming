#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 *
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int y, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		ptr[y] = min++;

	return (ptr);
}
