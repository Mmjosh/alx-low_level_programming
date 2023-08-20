#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @decimal_num: Decimal number to print in binary.
 */
void print_binary(unsigned long int decimal_num)
{
	int bit_index, bit_count = 0;
	unsigned long int current_bit;

	for (bit_index = 63; bit_index >= 0; bit_index--)
	{
		current_bit = decimal_num >> bit_index;

		if (current_bit & 1)
		{
			_putchar('1');
			bit_count++;
		}
		else if (bit_count)
			_putchar('0');
	}
	if (!bit_count)
		_putchar('0');
}
