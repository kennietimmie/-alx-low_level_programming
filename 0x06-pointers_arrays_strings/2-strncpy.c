#include "main.h"

/**
 * _strncpy - Copy n numbers of string.
 * @dest: Destination string
 * @src: Source string.
 * @n: number of string to copy.
 *
 * Return: Always char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (*(src + i) == '\0')
			*(dest + i) = '\0';
		else
			*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

