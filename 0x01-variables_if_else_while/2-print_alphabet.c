#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all alphabetical letters in lowercase
 * Return: 0
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
	putchar(a++);
	}
	putchar('\n');

	return (0);
}

