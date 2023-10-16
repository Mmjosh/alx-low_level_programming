#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the array provided
 * @size: number of elements in the array
 * @cmp: a pointer to a compare function
 * Return: the index of the element being searched in the array or -1
 * if no element matches or `size <= 0`.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL)
		exit(98);
	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
	}

	return (-1);
}
