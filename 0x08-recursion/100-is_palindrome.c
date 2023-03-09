#include "main.h"

int is_palindrome_helper(const char *cs, char *s, int i);

/**
 * is_palindrome - check if string is empty.
 * @s: string.
 *
 * Return: 1 if string is empty otherwise 0.
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	if (i)
		i -= 1;
	return (is_palindrome_helper(s, s, i));
}

/**
 * is_palindrome_helper - helper for palindrome
 * @cs: const pointer to string.
 * @s: string.
 * @i: index of last character of string.
 *
 * Return: 1 if is palindrome otherwise 0;
 */
int is_palindrome_helper(const char *cs, char *s, int i)
{
	if (i == 0 || *s == '\0')
		return (1);
	if (*s == *(cs + i))
		return (is_palindrome_helper(cs, s + 1, i - 1));
	else
		return (0);
	return (0);
}

/**
 * _strlen_recursion - recursively get string length.
 * @s: string.
 *
 * Return: length of string minus the null terminating character.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

