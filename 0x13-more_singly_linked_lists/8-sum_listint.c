#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to
 *
 * Return: sum of all data->n otherwise 0
 */
int sum_listint(listint_t *head)
{
	listint_t *next = head;
	unsigned int sum = 0;

	while (next)
	{
		sum += next->n;
		next = next->next;
	}
	return (sum);
}
