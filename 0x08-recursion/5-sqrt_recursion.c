#include "main.h"

/**
 * _sqrt_recursive - calculates the natural square root of a No. using
 * Newton-Raphson method.
 * @n: the number whose root we're finding
 * @s: current estimate for the root of 'n'
 * Return: the root of 'n' or -1
 */

int _sqrt_recursive(int n, int s)
{
	int ss;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	ss = (s + n / s) / 2;

	if (ss == s)
		return (s);
	else
		return (_sqrt_recursive(n, ss));
}

/**
 * _sqrt_recursion - returns the square root of 'n'
 * @n: the number whose sqr root we're calculating
 * Return: the natural sqr root of 'n' or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursive(n, n));
}
