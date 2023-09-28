#include "main.h"

/**
 * wildcmp_recursive - compares if two strings are identical
 * @s1: pointer to the 1st string we're comparing with another
 * @s2: pointer to the 2nd string
 * Return: 1 if 's1' and 's2' can be considered identical, otherwise
 * return 0.
 */
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		int r1 = wildcmp_recursive(s1, s2 + 1);

		return (r1 || (*s1 != '\0' && wildcmp_recursive(s1 + 1, s2)));
	}

	if (*s1 == *s2)
		return (wildcmp_recursive(s1 + 1, s2 + 1));
	return (0);
}

/**
 * wildcmp - checks if two strings can be considered identical
 * @s1: pointer to the first string
 * @s2: pointer to the 2nd string
 * Return: 1 if the strings are considered identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2) ? 1 : 0);
}

