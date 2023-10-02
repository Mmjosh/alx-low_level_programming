#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: the number of arguments
 * @av: an array of argument strings
 * Return: pointer to a new string with arguments separated by
 * '\n' or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0, i, j, k = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	concatenated = malloc(total_length * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k++] = av[i][j];
		}
		concatenated[k++] = '\n';
	}

	concatenated[k] = '\0';

	return (concatenated);
}
