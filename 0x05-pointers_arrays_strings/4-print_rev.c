#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string we're 'reverse-printing'
 * Return: nothing
 */
void print_rev(char *s)
{
	int l = 0;
	int i = 0;
	
	while (s[l] != '\0')
	{
		l++;
	}
	
	while (i < l)
	{
		_putchar(s[l - 1]);
		l--;
	}
	_putchar('\n');
}	
