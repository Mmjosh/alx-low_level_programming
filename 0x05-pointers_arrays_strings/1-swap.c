#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to 1st integer to swap
 * @b: pointer to 2nd integer to swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
