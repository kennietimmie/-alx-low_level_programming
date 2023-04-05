#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.list.
 * @head: pointer to listint_t
 * @idx: position to insert the node
 * @n: node->n integer
 *
 * Return: void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next = NULL, *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !(*head) || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	next = *head;

	while (next)
	{
		if (i == idx)
		{
			new->next = next--;
			if (idx == 0)
			{
				*head = new;
			}
			else
			{
				next->next = new;
			}
			return (new);
		}
		// printf("[%d]\n", next->n);
		next = next->next;
		i++;
	}
	return (NULL);
}
