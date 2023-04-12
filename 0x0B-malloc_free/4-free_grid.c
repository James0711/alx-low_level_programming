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
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
