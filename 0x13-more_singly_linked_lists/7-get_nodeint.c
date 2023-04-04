#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to listint_t
 * @index: index to get
 *
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *next = head;
	unsigned int i = 0;

	while (next)
	{
		if (i == index)
			return (next);
		next = next->next;
		i++;
	}
	return (NULL);
}
