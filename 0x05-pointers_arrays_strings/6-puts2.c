#include "main.h"

/**
 * puts2 - Print every other character.
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar(10);
}

