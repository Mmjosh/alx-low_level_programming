#include <stdio.h>

/**
 * main - prints all arguments it receives including the executable
 * @argc: argument count
 * @argv: pointer to an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);

	return (0);
}
