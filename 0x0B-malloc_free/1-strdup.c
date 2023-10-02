#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int _strlen_recursion(char *s);
/* _strlen_recursion - function declaration */


/**
 * _strdup - creates a pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer to the string we're allocating new memory for
 * Return: pointer to the new space or 'NULL'
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc((_strlen_recursion(str) + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	strcpy(s, str);

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
