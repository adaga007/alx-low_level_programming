#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to the start of the list
 * Return: start of the list in reversed form
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *latter = NULL;

	while (*head)
	{
		latter = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = latter;
	}

	*head = former;

	return (*head);
}
