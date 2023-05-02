#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: pointer to head
 * @index: node to delete
 * Return: 1 if success or -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempNode;
	listint_t *nextNode;
	unsigned int counter = 0;

	tempNode = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tempNode->next;
		free(tempNode);
		return (1);
	}

	while (tempNode && counter < index - 1)
	{
		tempNode = tempNode->next;
		counter++;
		if (tempNode == NULL || tempNode->next == NULL)
			return (-1);
	}

	nextNode = temp->next->next;
	free(tempNode->next);
	tempNode->next = nextNode;
	return (1);
}
