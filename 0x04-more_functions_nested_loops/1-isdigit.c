#include "main.h"
/**
 * _isdigit - checks if parameter is a No. btn 0-9
 * @c: input No.
 * Return: 1 if its a No. btn 0-9,else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
