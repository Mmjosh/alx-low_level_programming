/* 3-op_functions.c */
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds 'a' and 'b'.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: `a+b`.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - adds 'a' and 'b'.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: `a-b`.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 'a' and 'b'.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: `a*b`.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 'a' and 'b'.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: `a/b`.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - calculates 'a' modulo 'b'.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: `a%b`.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
