#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a newline
 * @separator: a string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: variable number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list v_x;

	va_start(v_x, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(v_x, char *);
		if ((char *)str == (char *)NULL)
			str = "(nil)";

		printf("%s", str);

		if ((char *)separator != (char *)NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(v_x);
}
