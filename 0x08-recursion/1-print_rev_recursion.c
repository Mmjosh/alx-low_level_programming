#include "main.h"

/**
 * _print_rev_recursion - print a string of characters in rev order
 *  @s: string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
