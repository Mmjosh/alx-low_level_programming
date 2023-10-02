#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it
 * with a specific character.
 * @size: size of the array we want to create
 * @c: the character we're the array with
 * Return: pointer to the array or 'NULL' if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
