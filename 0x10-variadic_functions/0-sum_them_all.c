#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: name of the last named parameter of the function
 * @...: variable number of arguments
 * Return: the sum, else return 0 if 'n' = 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list v_x;

	if (n == 0)
		return (0);

	va_start(v_x, n);
	for (i = 0 ; i < (int)n ; i++)
		sum += va_arg(v_x, int);

	va_end(v_x);
	return (sum);
}
