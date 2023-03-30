#include "lists.h"

/**
 * list_len - number of elements in a linked
 * @h: pointer to link list
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
