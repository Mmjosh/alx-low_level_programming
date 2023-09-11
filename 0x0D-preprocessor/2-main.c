#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the file it was compiled from
 * Return: 0
 */
int main(void)
{
	char *c = __FILE__;
	int i;

	for (i = 0 ; c[i] != '\0' ; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
