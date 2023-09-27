#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: pointer to the string we're printing
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
