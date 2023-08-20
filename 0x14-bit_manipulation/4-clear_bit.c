#include "main.h"

/**
 * clear_bit - Clears a specified bit at a given index in a decimal number.
 * @decimal_num_ptr: Pointer to the decimal number to modify.
 * @index: Index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *decimal_num_ptr, unsigned int index)
{
	if (index > 63)
		return (-1);

	*decimal_num_ptr = (~(1UL << index) & *decimal_num_ptr);
	return (1);
}
