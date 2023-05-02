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
	listint_t *tempNode = *head;
	listint_t *currentNode = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tempNode || !(tempNode->next))
			return (-1);
		tempNode = tempNode->next;
		i++;
	}


	currentNode = tempNode->next;
	tempNode->next = currentNode->next;
	free(currentNode);

	return (1);
}

