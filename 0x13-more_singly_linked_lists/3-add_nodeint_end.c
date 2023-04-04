#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a listint_t list.
 * @head: pointer to listint_t
 * @n: number for listint_t n
 *
 * Return: new listint_t otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head, *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
