#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all No's from input to 98
 * @n: the starting No.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", num--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			 printf("%d, ", num--);
		printf("%d\n", n);
	}
}

