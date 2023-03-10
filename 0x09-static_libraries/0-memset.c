#include "main.h"
/**
 * _memset - fill memory with a constant byte.
 * @s: pointer to string.
 * @b: character to fill.
 * @n: number of characters to fill.
 *
 * Return: pointer to char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
