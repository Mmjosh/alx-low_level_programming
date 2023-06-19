#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	printf("%d", num);
	num++;
	}
	putchar('\n');
	return (0);
}

