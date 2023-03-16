#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array.
 * @nmemb: numbers of element.
 * @size: bytes size.
 *
 * Return: if success pointer to allocated space otherwise NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}

