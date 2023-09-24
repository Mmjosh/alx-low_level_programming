#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string whose length we're finding
 * Return: string-length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++; /* 'i' is the length counter */
		s++; /* mv to next character in the string */
	}
	return (i);
}
