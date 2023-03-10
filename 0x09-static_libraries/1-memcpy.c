#include "main.h"
/**
 * _memcpy - fill memory with a constant byte.
 * @dest: pointer to memory destination.
 * @src: pointer to memory src.
 * @n: numbers of byte.
 *
 * Return: pointer to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
