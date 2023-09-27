#include "main.h"

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
