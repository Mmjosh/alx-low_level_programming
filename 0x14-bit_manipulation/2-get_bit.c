#include "main.h"
#include <stdlib.h>

/**
 * return_binary - converts a decimal(base 10) to binary.
 * @n: the decimal to be converted to binary.
 * Return: the binary result of the converted decimal.
 */
char *return_binary(unsigned long int n)
{
	int i = 0, j = 0;
	char *binary, temp;

	binary = (char *)malloc(64 * sizeof(char));
	if (binary == NULL)
		return (NULL);

	if (n == 0)
	{
		binary[i] = '0';
		binary[i + 1] = '\0';
		return (binary);
	}

	while (n > 0)
	{
		binary[i] = (n & 1) + '0';
		n = n >> 1;
		i++;
	}

	binary[i] = '\0';
	i--;

	while (j < i)
	{
		temp = binary[i];
		binary[j] = binary[i];
		binary[i] = temp;
		j++;
		i--;
	}
	return (binary);
}

/**
 * get_bit - returns the value of abit at a given index
 * @n: the decimal
 * @index: the index we're gon retrieve from the binary rep of 'n'
 * Return: value of a bit at 'index'
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	char *str;

	str = return_binary(n);
	if (str == NULL || index >= 64)
	{
		free(str);
		return (-1);
	}

	i = str[index] - '0';
	free(str);

	return (i);
}
