#include "main.h"

/*
 * print_putchar - print putchar
 *
 * Return: 0
*/
int print_putchar(void)
{
	char *str = "putchar";
	
	while (*str)
		_putchar(*str);
	return (0);
}
