#include <stdio.h>

/**
 * main - prints the alphabets in lowercase but in reverse order
 * Return: 0
 */
int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
