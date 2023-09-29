#include "main.h"

/**
 * is_divisible - checks if 'n' is divisible by a given divisor 'd'
 * @n: the number we're checking its divisiblity with 'd'
 * @d: the divisor
 * Return: 1 if any divisor exists that evenly divides 'n'
 * otherwise return 0.
 */
int is_divisible(int n, int d)
{
	if (d <= 1)
		return (0);
	if (n % d == 0)
		return (1);
	else
		return (is_divisible(n, d - 1));
}

/**
 * is_prime_number - checks 'primality'
 * @n: the number we're checking for 'primality'
 * Return: 1 if 'n' is prime, else return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, n - 1));
}
