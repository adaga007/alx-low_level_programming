#include "lists.h"

/**
 * pop_listint - a function that frees a listint_t list.
 * @head: start list
 * Return: Content of head or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int content;

	if (*head == NULL)
		return (0);

	tempNode = *head;
	content = tempNode->n;
	*head = tempNode->next;

	free(tempNode);
	return (content);
}
