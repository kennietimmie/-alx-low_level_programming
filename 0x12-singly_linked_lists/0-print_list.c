#include "lists.h"

/**
 * print_list - print all elements of a list
 * @h: pointer to link list
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] (%s)\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return size;
}
