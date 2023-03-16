#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: is success pointer to allocated memory otherwise NULL.
 */
int *array_range(int min, int max)
{
	int *arange, i;

	if (min > max)
		return (NULL);

	arange = malloc(sizeof(int) * (max - min) + 1);

	if (arange == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arange[i] = min;
	return (arange);
}

