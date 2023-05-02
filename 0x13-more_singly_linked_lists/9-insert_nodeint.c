#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: head of the list
 * @idx: Where to put the new node
 * @n: The content of the new node
 * Return: address of new node or NULL if unsuccessful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tempNode = *head;
	listint_t *newNode;
	unsigned int total = 0;

	if (tempNode == NULL && idx != 0)
		return (NULL);

	while (tempNode && total < idx - 1)
	{
		tempNode = tempNode->next;
		total++;
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		if (idx == 0)
		{
			newNode->next = *head;
			*head = newNode;
			return (newNode);
		}
		if (total + 1 == idx)
		{
			newNode->next = tempNode->next;
			tempNode->next = newNode;
			return (newNode);
		}
	}
	return (NULL);
}
