#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements in array.
 *
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i = 0; tmp, j = n - 1;

	while (i != n / 2)
	{
		tmp = *(a + (j - i));
		*(a + (j - i)) = *(a + i);
		*(a + i) = tmp;
		i++;
	}
}

