#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character being checked
 * Return: 1 if 'c' is a letter, otherwise return 0
 */
int _isalpha(int c)
{
	int i;

	/* '65 < x > 90'- ASCII Range for uppercase letters */
	for (i = 65 ; i <= 90 ; i++)
	{
		if (c == i)
			return (1);
	}

	/* '97 < x > 122' - ASCII Range for lowercase characters */
	for (i = 97 ; i <= 122 ; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
