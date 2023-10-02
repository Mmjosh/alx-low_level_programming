#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * alloc_grid - allocates memory for a 2D array of integers
 * each element on the array should be initialized to 0
 * @width: the width of the array
 * @height: the height of the array
 * Return: pointer to the new memory space with the array or 'NULL'
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}

	for (j = 0 ; j < width ; j++)
		a[i][j] = 0;
	}

	return (a);
}
