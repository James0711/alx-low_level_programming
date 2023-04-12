#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - A function that frees a 2D grid previously created by
 * alloc_grid function
 *
 * @grid: 2 Dimensional grid
 * @height: height of grid
 *
 * Return: NULL
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
