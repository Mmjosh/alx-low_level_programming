#include "main.h"

/**
 * flip_bits - Returns the number of differing bits between two numbers.
 * @n: First unsigned long integer.
 * @m: Second unsigned long integer.
 *
 * Return: Number of differing bits between the two numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_index, differing_bits_count = 0;
	unsigned long int differing_bits;
	unsigned long int xor_result = n ^ m;

	for (bit_index = 63; bit_index >= 0; bit_index--)
	{
		differing_bits = (xor_result >> bit_index) & 1;

		differing_bits_count += differing_bits;
	}

	return (differing_bits_count);
}
