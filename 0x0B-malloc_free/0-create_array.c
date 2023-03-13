#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of size "size" filled with c.
 * @size: size of array.
 * @c: character to fill with.
 *
 * Return: if success pointer to array otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (array != NULL)
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	return (array);
}

