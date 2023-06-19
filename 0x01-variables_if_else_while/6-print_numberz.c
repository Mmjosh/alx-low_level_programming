#include <stdlib.h>
#include <stdio.h>
/**
 * main - uses putchar to print all single digits of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	putchar(num + '0');
	num++;
	}
	putchar('\n');
	return (0);
}
