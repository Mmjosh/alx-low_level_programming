#include "main.h"

/**
 * _strcpy - copies the string pointed to by 'src' the null terminator
 * included('\0'), to the buffer pointed to by 'dest'
 * @dest: pointer to the buffer that will hold the copied string
 * @src: pointer to the string we're copying
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
