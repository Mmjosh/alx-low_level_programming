/* 3-get_op_func.c */
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user.
 * @s: the string representing the operation passed by the user.
 * Return: the pointer to the function that corresponds to the operator
 * given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
