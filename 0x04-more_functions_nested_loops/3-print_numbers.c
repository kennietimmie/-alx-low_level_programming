#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
		putchar(ch++);
	putchar('\n');
}
