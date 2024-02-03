#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: pointer to the array we'll looking for an integer
 * inside it.
 * @size: size of the array.
 * @cmp: pointer to a function that we'll be using to look for
 * the integer with specific properties.
 * Return: index of the first element for which the `cmp` function
 * does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		exit(98);
	else if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
