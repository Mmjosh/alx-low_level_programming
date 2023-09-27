#include "main.h"

/**
 * factorial - calculates of a given number
 * @n: the number whose factorial we're finding
 * Return: factorial of 'n'
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
