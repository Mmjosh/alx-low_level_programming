#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: string to be measured.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
