#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to a string
 * @f: pointer to a function that takes a character pointer as a
 * parameter and returns 'void'.
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
