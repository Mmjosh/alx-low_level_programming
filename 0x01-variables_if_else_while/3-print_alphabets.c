#include <stdio.h>

/**
 * main - prints all the alphabets 1st in lowercase then uppercase
 * Return: 0
 */
int main(void)
{
	int a = 'a', A = 'A';

	while (a <= 'z')
		putchar(a++);
	while (A <= 'Z')
		putchar(A++);
	putchar('\n');

	return (0);
}
