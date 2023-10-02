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
	int l1 = 0, l2 = 0;

	if (s1 != NULL)
		l1 = strlen(s1);

	if (s2 != NULL)
		l2 = strlen(s2);

	if (l1 == 0 && l2 == 0)
		return (NULL);

	s = malloc((l1 + l2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		strcpy(s, s1);
		
		if (s2 != NULL)
			strcat(s, s2);
	}
	else
		strcpy(s, s2);

	return (s);
}
