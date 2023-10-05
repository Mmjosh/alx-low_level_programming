#include <stdlib.h>
#include "main.h"

int is_digit(char c);
/* is_digit - function declaration */

/**
 * is_digit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if character is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * str_len - calculates the length of a string
 * @str: the string whose length we're finding
 * Return: length of the string
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * multiply - multiplies two numbers
 * @num1: pointer to the 1st string
 * @num2: pointer to the 2nd string
 * Return: 0
 */
int multiply(char *num1, char *num2)
{
	int len1 = str_len(num1);
	int len2 = str_len(num2);
	int *result, i, j, mul, sum, started;

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = mul + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	started = 0;
	for (i = 0; i < len1 + len2; i++)
	{
		if (result[i] != 0 || i == len1 + len2 - 1)
		{
			_putchar(result[i] + '0');
			started = 1;
		}
		else if (started == 1)
			_putchar('0');
	}
	_putchar('\n');
	free(result);
	return (0);
}
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: pointer to an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	int i;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!is_digit(num1[i]))
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!is_digit(num2[i]))
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}
	}
	multiply(num1, num2);
	return (0);
}
