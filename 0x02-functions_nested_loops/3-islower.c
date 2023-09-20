#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: the 'character' being checked
 * Return: 1 if 'c' is lowercase, else return 0
 */
int _islower(int c)
{
	/* '97 < c > 122' - ASCII Range for lowercase characters */
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
