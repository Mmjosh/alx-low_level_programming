#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid created by alloc_grid
 * @grid: pointer to the 2D array
 * @height: the height of the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
