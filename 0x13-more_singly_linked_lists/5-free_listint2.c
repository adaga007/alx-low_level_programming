#include "lists.h"
/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: list head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpNode;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmpNode = *head;
		free(*head);
		*head = tmpNode->next;
	}
	*head = NULL;
}
