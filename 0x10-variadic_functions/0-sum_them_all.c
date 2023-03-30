#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: number
 *
 * Return: summed value
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list list;

	va_start(list, n);
	if (n)
		for (i = 0; i < n; i++)
			sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
