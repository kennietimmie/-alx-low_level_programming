#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer.
 * @size: size of pointer value.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, lsum = 0, rsum = 0, limit = size * size;

	for (i = 0; i < limit; i++)
	{
		if (i % (size + 1) == 0)
			lsum += a[i];
		if (i % (size - 1) == 0 && i != 0 && i != limit - 1)
			rsum += a[i];
	}
	printf("%d, %d\n", lsum, rsum);
}
