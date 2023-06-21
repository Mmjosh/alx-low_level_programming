#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10x
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 10 ; ten <= 9 ; ten++)
	{
		for (la = 'a' ; la <= 'z' ; la++)
			_putchar(la);
		_putchar('\n');
	}
}
