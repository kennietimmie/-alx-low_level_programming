#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two string limit to n byte size.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Bytes size.
 *
 * Return: Always char *.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while (j < n && *(src + j))
	{
		*(dest + i) = * (src + j);
		j++, i++;
	}
	return (dest);
}

