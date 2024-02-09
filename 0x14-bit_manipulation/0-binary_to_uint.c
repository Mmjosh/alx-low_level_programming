#include "main.h"
#include <stdlib.h>

/**
 * power - calculates "base" raised to "exponent".
 * @base: the base.
 * @exponent: the power "base" is being raised to.
 * Return: result.
 */
unsigned int power(unsigned int base, unsigned int exponent)
{
	unsigned int u_d = 1, i;

	for (i = 0; i < exponent; i++)
	{
		u_d *= base;
	}

	return (u_d);
}

/**
 * binary_to_uint - converts binary(a string of 0s and 1s) to unsigned
 * int.
 * @b: pointer to the binary string.
 * Return: unsigned integer(base 10 result of the binary).
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;
	int u = 0; /* `u` holds the length of the string `b` */

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		u += 1;
		i++;
	}

	for (i = 0; i < u; i++)
	{
		if (b[i] == '1')
			result += power(2, u - 1 - i);
	}

	return (result);
}
