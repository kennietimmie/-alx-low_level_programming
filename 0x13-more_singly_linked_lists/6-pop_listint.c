#include "lists.h"

/**
 * pop_listint - fdeletes the head node of a listint_t linked list
 * @head: pointer to listint_t
 *
 * Return: listint_t n otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int node_data_n = 0;

	if (head && *head)
	{
		next = (*head)->next;
		node_data_n = (*head)->n;
		free(*head);
		*head = next;
	}
	return (node_data_n);
}
