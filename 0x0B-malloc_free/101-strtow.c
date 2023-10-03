#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - split a string into words
 * @str: the input string
 * Return: pointer to an array of strings (words) or NULL if str is NULL
 */
char **strtow(char *str)
{
	int i, j, l, k, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i] != '\0')
		if (str[i] != ' ')
		{
			j = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			words[k] = malloc((i - j + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (l = 0; l < k; l++)
					free(words[l]);
				free(words);
				return (NULL);
			}
			strncpy(words[k], str + j, i - j);
			words[k][i - j] = '\0';
			k++;
		}
		else
			i++;
	words[k] = NULL;
	return (words);
}
