#include "main.h"
/**
 * print_number - prints an integer.
 * @n: integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	int num;
	
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = (n + 1) * -1;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	if (num == n)
		_putchar((num % 10) + '0');
	else
		_putchar((num % 10) + 1 + '0');
}
