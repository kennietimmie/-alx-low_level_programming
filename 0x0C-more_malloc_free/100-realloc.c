#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory.
 * @ptr: pointer to previous memory
 * @old_size: old size of ptr.
 * @new_size: new size for new memory.
 *
 * Return: if success pointer to new memory otherwise NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr != NULL)
		free(ptr);

	ptr = malloc(new_size);
	return (ptr);
}

