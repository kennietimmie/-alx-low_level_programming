#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line, except 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		if (ch != '2' && ch != '4')
			putchar(ch);
		ch++;
	}
	putchar('\n');
}
