#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: The head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tempNode;

	while (head)
	{
		tempNode = head->next;
		free(head);
		head = tempNode;
	}
}
