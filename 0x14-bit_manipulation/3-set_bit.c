#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1 in a decimal number.
 * @decimal_num_ptr: Pointer to the decimal number to modify.
 * @index: Index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *decimal_num_ptr, unsigned int index)
{
	if (index > 63)
		return (-1);

	*decimal_num_ptr = ((1UL << index) | *decimal_num_ptr);
	return (1);
}
