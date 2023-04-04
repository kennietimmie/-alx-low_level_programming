#include "lists.h"

/**
 * listint_len - get all elements in a listint_t
 * @h: pointer to listint_t
 *
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numbers_of_nodes = 0;

	while (h)
	{
		h = h->next;
		numbers_of_nodes++;
	}
	return (numbers_of_nodes);
}
