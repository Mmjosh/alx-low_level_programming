#include "main.h"

/**
 * _pow_recursion - calculates the value of; x^y
 * @x: the base
 * @y: the power
 * Return: 'x' raised to the power of 'y'
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
