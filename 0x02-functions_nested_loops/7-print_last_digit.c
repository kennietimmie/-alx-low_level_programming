#include "main.h"

/**
 * print_last_digit - print last number of a number
 * @n: number
 *
 * Return: last number
 */
int print_last_digit(int n)
{
	if (n < 9 && n >= 0)
		_putchar(n + '0');
	else
		_putchar((n % 10) + '0');
	return (n < 9 && n >= 0 ? n : n % 10);
}
