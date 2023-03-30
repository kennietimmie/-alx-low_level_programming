#include "main.h"

/**
 * print_last_digit - print last number of a number
 * @n: number
 *
 * Return: last number
 */
int print_last_digit(int n)
{
	int l;

	if (n >= 0)
		l = n % 10;
	else
		l = (n % 10) * -1;
	_putchar(l + '0');
	return (l);
}
