#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(const char *separator, va_list ap);
void print_integer(const char *separator, va_list ap);
void print_float(const char *separator, va_list ap);
void print_string(const char *separator, va_list ap);
/**
 * struct f_types - struct format_types
 * @specifier: separator specifier
 * @callback: function pointer
 */
typedef struct f_types
{
	char specifier;
	void (*callback)(const char *separator, va_list ap);
} format_types;

#endif
