#include "main.h"

/**
 * _strcat - appends a string onto another to make a longer string
 * @dest: pointer to the final string(which is technically the first str
 * b4 concatenation).
 * @src: pointer to the 2nd string that will be appended to 'dest'
 * Return: pointer to the final/resulting string
 */
char *_strcat(char *dest, char *src)
{

	while (*dest != '\0')
	{
		/* _putchar(dest[i]); */
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
