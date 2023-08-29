#include <stdio.h>

/**
 * main - prints the alphabets in lowercase except q n e
 * Return: 0
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');

	return (0);
}
