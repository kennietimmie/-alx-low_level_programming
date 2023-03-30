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
	char *separator = ", ";
	format_types f_types[] = {
		{ 'c', print_char },
		{ 'i', print_integer },
		{ 'f', print_float },
		{ 's', print_string },
	};

	va_start(ap, format);
	while (format[i] && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i + 1] == '\0')
				separator = "";
			if (format[i] == f_types[j].specifier)
				f_types[j].callback(separator, ap);
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
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
	printf("%c%s", va_arg(ap, int), separator);
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
	printf("%d%s", va_arg(ap, int), separator);
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
	printf("%f%s", va_arg(ap, double), separator);
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
	printf("%s%s", va_arg(ap, char *), separator);
}
