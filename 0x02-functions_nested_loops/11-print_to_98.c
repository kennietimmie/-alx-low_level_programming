#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line.
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
		while (n <= 98)
		{
			printf("%d%s", n, n == 98 ? "" : ", ");
			n++;
		}
	else
		while (n >= 98)
		{
			printf("%d%s", n, n == 98 ? "" : ", ");
			n--;
		}

	printf("\n");
}
