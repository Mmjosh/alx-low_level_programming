#include "main.h"
/**
 * print_sign - prints the sign of a number
 * n: No of the sign to be printed
 * Return: 1 if number is greater is zero
 * 0 if No.=zero
 * -1 if < 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
