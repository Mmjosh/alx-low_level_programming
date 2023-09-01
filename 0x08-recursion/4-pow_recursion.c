#include "main.h"

/**
 * _pow_recursion - returns the value of 'x' raised
 * to the power of 'y'
 * if y < 0, function returns -1
 * @y: the power
 * @x: number being raised to
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
