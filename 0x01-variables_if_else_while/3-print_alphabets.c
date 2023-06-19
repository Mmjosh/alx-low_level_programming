#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all lowercase alphabets followed by uppercase alphabets
 * Return: 0
 */
int main(void)
{
	int a = 'a';
	int A = 'A';

	while (a <= 'z')
	{
	putchar(a++);
	}
	while (A <= 'Z')
	{
	putchar(A++);
	}
	putchar('\n');

	return (0);
}
