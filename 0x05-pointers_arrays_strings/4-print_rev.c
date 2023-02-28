#include "main.h"

/**
 * print_rev - Print string in reverse order and add a new line
 * @s: String
 *
 * Return: Always void
 */
void print_rev(char *s)
{
	while (*s)
		s++;
	--s;

	while (*s)
	{
		_putchar(*s);
		s--;
	}

	_putchar(10);
}

