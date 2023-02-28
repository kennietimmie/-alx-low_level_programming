#include "main.h"

/**
 * print_array - Print n numbers of element in a.
 * @a: array of int.
 * @n: Number of element to print.
 *
 * Return: Always void.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
		printf("%d%s", a[i], i + 1 != n ? ", " : "");

	printf("\n");
}

