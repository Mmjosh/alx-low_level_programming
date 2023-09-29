#include <stdio.h>

/**
 * main - prints the No. of arguments passed to it
 * @argc: argument count
 * @argv: pointer to an array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc = argc - 1;
	printf("%d\n", argc);

	return (0);
}
