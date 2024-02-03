#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: pointer to the array.
 * @size: size of the array.
 * @action: pointer to a function we'll use to traverse the array.
 * Return: void/nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size <= 0)
		exit(EXIT_FAILURE);
	else if (action == NULL)
		exit(98);
	else
		for (i = 0; i < (int)size; i++)
		{
			(*action)(array[i]);
		}
}
