#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index in a decimal number.
 * @decimal_num: Decimal number to retrieve the bit from.
 * @index: Index of the bit to get.
 *
 * Return: The value of the bit at the given index (0 or 1), or -1 on error.
 */
int get_bit(unsigned long int decimal_num, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (decimal_num >> index) & 1;

	return (bit_value);
}
