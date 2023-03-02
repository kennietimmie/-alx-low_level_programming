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
	int counter = 0, temp, limit = n - 1;

	while (counter <= limit)
	{
		temp = a[limit];
		a[limit] = a[counter];
		a[counter] = temp;
		counter++;
		limit--;
	}
}

