#include "main.h"

/**
 * print_last_digit - print last number of a number
 * @n: number
 *
 * Return: last number
 */
int print_last_digit(int n)
{
	n = n < 0 ? n * -1 : n;

	if (n < 9)
		_putchar(n + '0');
	else
		_putchar((n % 10) + '0');
	return (n < 9 ? n : n % 10);
}
