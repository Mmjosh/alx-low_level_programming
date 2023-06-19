#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns variable n a random num and specifies if its + or - or =0
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* using if to show whether n is +,-,OR =0 */
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}

	return (0);
}
