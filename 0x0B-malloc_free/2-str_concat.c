#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string
 * Return: pointer to the new space containing contents of 's1'
 * followed by contents of 's2', otherwise return 'NULL'
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, l1, l2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	l1 = strlen(s1);
	l2 = strlen(s2);

	s = malloc((l1 + l2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < l1 ; i++)
		s[i] = s1[i];

	for (j = 0 ; j < l2 ; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
