#include "main.h"

/**
 * puts_half - Print half of a string.
 * @str: String
 *
 * Return: Always: void
 */
void puts_half(char *str)
{
	int length = 0, i;

	while (str[length])
		length++;

	i = length % 2 == 0 ? length / 2 : (length - 1) / 2 + 1;

	for (; i < length; i++)
		_putchar(str[i]);

	_putchar(10);
}

