#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: address of pointer to link list
 * @str: new string for the list node
 *
 * Return: address of new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t)), *tmp = *head;

	int i = 0;

	if (h == NULL)
		return (NULL);
	while (str[i])
		i++;

	h->len = i;
	h->str = strdup(str);
	h->next = NULL;

	if (tmp == NULL)
	{
		*head = h;
		return (h);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = h;
	return (h);
}
