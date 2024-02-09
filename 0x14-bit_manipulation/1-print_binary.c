#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the decimal to be converted to binary.
 * Return: void/nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned int u_v = 0;
	unsigned int i_th = 0;
	unsigned int lsb;

	if (n == 0 && (n >> 1) == 0)
	{
		_putchar('0');
		return;
	}

	if (n >> 1 != 0)
	{
		while (n > 0)
		{
			lsb = n & 1;
			u_v |= (lsb << i_th);
			n >>= 1;
			i_th++;
		}
	}

	while (i_th > 0)
	{
		_putchar((u_v >> (i_th - 1)) & 1 ? '1' : '0');
		i_th--;
	}
}
