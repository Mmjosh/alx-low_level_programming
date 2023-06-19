#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all alphabets in reverse order and in lowercase
 * Return: 0
 */
int main(void)
{
	int z = 'z';

	while (z >= 'a')
	{
	putchar(z--);
	}
	putchar('\n');
	return (0);
}
