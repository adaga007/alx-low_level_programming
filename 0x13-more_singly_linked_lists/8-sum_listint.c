#include "lists.h"

/**
 * sum_listint - a function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: head of the list
 * Return: the total or 0 for empty list
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
