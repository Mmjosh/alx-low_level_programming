#include "main.h"

/* _strlen_recursion - function declaration */
int _strlen_recursion(char *s);

/**
 * is_palindrome_recursive - checks if a given substring(specified by
 * 'v' and 'v_x' indices) is a palindrome.
 * @s: pointer to the string we're checking
 * @v: index of the first character in the current substring
 * @v_x: represents the index of the last character in the current
 * substring.
 * Return: 1 if the substring specified by 'v' and 'v_x' is palindrome,
 * otherwise it returns 0.
 */
int is_palindrome_recursive(char *s, int v, int v_x)
{

	if (v >= v_x)
		return (1);
	if (s[v] != s[v_x])
		return (0);
	return (is_palindrome_recursive(s, v + 1, v_x - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to the string we're checking
 * Return: 1 if the string is palindrome, otherwise it returns 0
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (is_palindrome_recursive(s, 0, l - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string whose length we're finding
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
