#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free memory allocated by array_grid.
 * @grid: pointer to grid.
 * @height: grid height.
 *
 * Return: Always void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
