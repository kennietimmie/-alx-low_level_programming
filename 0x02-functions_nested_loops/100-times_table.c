#include "main.h"
#include <stdio.h>

/**
 * print_times_table - pprints the n times table, starting with 0.
 * @n: n table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0, j = 0;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", j * i);
			else
				printf((j * i) < 10 ? "%-4s%d"
				       : (j * i) < 100 ? "%-3s%d" : "%-2s%d",
				       ",", j * i);
		}
		printf("\n");
	}
}
