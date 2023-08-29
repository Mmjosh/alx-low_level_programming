#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from zero
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');

	return (0);
}
