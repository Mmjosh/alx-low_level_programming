#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: minimum
 * @max: maximum
 * array created should contain all the values from 'min'(included)
 * to 'max'(included) ordered from 'min' to 'max'.
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a, size, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	a = malloc(size * sizeof(int));
	if (a == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		a[i] = min + i;

	return (a);
}
