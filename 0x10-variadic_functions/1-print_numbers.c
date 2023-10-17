#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers provided as a variable list of args.
 * @separator: the string to be printed between the numbers.
 * @n: the numbers of integers passed to the function.
 * @...: variable number of arguments.
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list v_x;

	va_start(v_x, n);
	for (i = 0 ; i < n ; i++)
	{
		num = va_arg(v_x, int);
		
		printf("%d", num);

		if ((int *)separator != (int *)NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(v_x);
}
