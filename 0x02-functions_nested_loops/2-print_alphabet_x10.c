#include "main.h"

/**
 * print_alphabet_x10 - print a - z 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 10;
	char c;

	while (i--)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
	}

}
