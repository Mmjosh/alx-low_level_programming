#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string whose half the function prints
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int l = 0;
	int h;

	while (str[i] != '\0')
	{
		l++;
		i++;
	}


	h = (l / 2);

	if ((l % 2) != 0)
		h = ((l - 1) / 2);

	for (i = h ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
