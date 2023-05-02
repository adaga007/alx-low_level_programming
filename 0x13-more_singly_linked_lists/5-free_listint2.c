#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: list head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	if (head)
	{
		while (*head)
		{
			tempNode = *head;
			*head = tempNode->next;
			free(temp);
		}
	}
}
