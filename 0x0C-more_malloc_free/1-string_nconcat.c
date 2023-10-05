#include <stdlib.h>
#include "main.h"

int _strlen_recursion(char *s);
/* _strlen_recursion - function declaration */

/**
 * string_nconcat - joins the 1st 'n' bytes of 's2' to 's1'
 * @s1: pointer to the first string
 * @s2: pointer to the 2nd string
 * @n: the first 'n' characters of 's2'
 * If 'n' is greater or equal to the length of s2 then use the entire
 * string 's2'
 * Return: pointer to the newly allocated space containing the
 * concatenated string else return 'NULL'
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1 = 0, l2 = 0;
	char *s;

	if (s1 != NULL)
	{
		l1 = _strlen_recursion(s1);
	}
	if (s2 != NULL)
	{
		l2 = _strlen_recursion(s2);
	}

	if (n >= l2)
		n = l2;

	s = malloc((l1 + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0 ; i < l1 ; i++)
		s[i] = s1[i];
	for (i = 0 ; i < n && s2[i] != '\0' ; i++)
		s[l1 + i] = s2[i];

	s[l1 + n] = '\0';
	return (s);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string whose length we're finding
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
