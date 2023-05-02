#include "lists.h"

/**
 * add_nodeint_end - a function that adds
 * a new node at the end of a listint_t list
 * @head: list
 * @n: data
 * Return: Address of the new element or NULL if unsuccessful
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tempNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	else
	{
		tempNode = *head;
		while (tempNode->next != NULL)
			tempNode = tempNode->next;
		tempNode->next = newNode;
	}
	return (newNode);
}
