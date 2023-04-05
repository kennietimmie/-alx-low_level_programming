#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: pointer to listint_t
 * @index: position to insert the node
 *
 * Return: 1 if successful otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = NULL, *prev_node;
	unsigned int i = 1;

	if (!head || !(*head))
		return (-1);

	prev_node = (*head);
	current_node = (*head)->next;

	if (index == 0)
	{
		free(prev_node);
		*head = current_node;
		return (1);
	}

	while (current_node)
	{
		if (i == index)
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
