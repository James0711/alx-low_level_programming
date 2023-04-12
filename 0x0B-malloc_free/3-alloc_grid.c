#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2D array of integers
 * @width: input width
 * @height: input height
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **bee;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	bee = malloc(height * sizeof(int));

	if (bee == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		bee[i] = malloc(width * sizeof(int));

		if (bee[i] == NULL)
		{
			for (; i >= 0; i--)
				free(bee[i]);

			free(bee);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			bee[i][j] = 0;
	}

	return (bee);
}
