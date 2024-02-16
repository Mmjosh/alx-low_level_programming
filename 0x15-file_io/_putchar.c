#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: the character to print
 * Return: 1 if true, else 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
