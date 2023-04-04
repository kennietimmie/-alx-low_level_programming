#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to listint_t
 * @n: number for listint_t n
 *
 * Return: new listint_t otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
		(*head) = new;
		(*head)->next = tmp;
	}

	return (new);
}
