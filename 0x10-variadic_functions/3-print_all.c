#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all -  prints anything, followed by a new line
 * @format: format specifiers
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0;
	char *separator = "", *sep = ", ";
	format_types f_types[] = {
		{ 'c', print_char },
		{ 'i', print_integer },
		{ 'f', print_float },
		{ 's', print_string },
	};

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == f_types[j].specifier)
			{
				f_types[j].callback(separator, ap);
				separator = sep;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_char - prints char, followed by separator
 * @separator: separator
 * @ap: variadic variable
 *
 * Return: void
 */
void print_char(const char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * print_integer - prints integer, followed by separator
 * @separator: separator
 * @ap: variadic variable
 *
 * Return: void
 */
void print_integer(const char *separator, va_list ap)
{
	printf("%s%i", separator, va_arg(ap, int));
}

/**
 * print_float - prints floating point numbers, followed by separator
 * @separator: separator
 * @ap: variadic variable
 *
 * Return: void
 */
void print_float(const char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * print_string - prints string, followed by separator
 * @separator: separator
 * @ap: variadic variable
 *
 * Return: void
 */
void print_string(const char *separator, va_list ap)
{
	char *s = va_arg(ap, char *);

	printf("%s%s", separator, s == NULL ? "(nil)" : s);
}
