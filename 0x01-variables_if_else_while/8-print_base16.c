#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num = 0;
	int a = 'a';

	while (num <= 9)
	{
	putchar(num + '0');
	num++;
	}
	while (a <= 'f')
	{
	putchar(a++);
	}
	putchar('\n');
	return (0);
}
