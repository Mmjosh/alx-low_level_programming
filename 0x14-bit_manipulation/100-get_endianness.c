#include "main.h"

/**
 * get_endianness - Determines the endianness of the machine.
 *
 * Return: 1 for little-endian, 0 for big-endian.
 */
int get_endianness(void)
{
	unsigned int reference = 1;
	char *byte_pointer = (char *)&reference;

	return (*byte_pointer);
}
