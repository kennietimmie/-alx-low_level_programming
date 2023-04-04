#include "lists.h"

/**
 * print_listint - prints elements in a listint_t
 * @h: pointer to listint_t
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numbers_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numbers_of_nodes++;
	}
	return (numbers_of_nodes);
}
