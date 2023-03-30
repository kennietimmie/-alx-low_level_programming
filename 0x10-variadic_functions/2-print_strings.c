#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints string, followed by a new line
 * @separator: separator
 * @n: numbers of passed param
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		printf("%s%s", ptr == NULL ? "(nil)" : ptr,
		i < n - 1 && separator != NULL ? separator : "");
	}
	printf("\n");
}
