#include "main.h"
/**
 * _memset - fill memory with a constant byte.
 * @s: char pointer.
 * @b: character to fill.
 * @n: numbers character to fill.
 * Return: pointer to char.
 */
char *_memset(char *s, char b, unsigned int n)
{	
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		s[counter] = b;
	return (s);
}
