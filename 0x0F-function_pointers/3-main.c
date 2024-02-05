/* 3-main.c */
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - (in simple terms)performs simple operations.
 * @argc: the number of arguments passed to main.
 * @argv: pointer to an array storing all the arguments passed to main.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;

	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	if (operation != NULL)
	{
		result = operation(num1, num2);
		printf("%d\n", result);
	}
	return (0);
}
