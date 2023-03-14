#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  create 2 dimensional arrays of ints
 * @width: width of the array
 * @height: array height.
 *
 * Return: if success pointer to pointer of array ints otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **two_d, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_d = (int **) malloc(sizeof(int *) * height);
	if (two_d == NULL)
		return (two_d);

	for (i = 0; i < height; i++)
	{
		two_d[i] = malloc(sizeof(int) * width);
		if (two_d[i] == NULL)
		{
			for (; i >= 0; i--)
				free(two_d[i]);
			free(two_d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			two_d[i][j] = 0;
	}
	return (two_d);
}
