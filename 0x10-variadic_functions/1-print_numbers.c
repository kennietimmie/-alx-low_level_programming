#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator
 * @n: numbers of passed param
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ap, int), i < n - 1 ? separator : "");
	}
	printf("\n");
}
