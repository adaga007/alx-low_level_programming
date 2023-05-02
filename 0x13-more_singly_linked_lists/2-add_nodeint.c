#include "lists.h"

/**
 * add_nodeint - a function that adds a new
 * node at the beginning of a listint_t list
 * @head: Where the list starts
 * @n: data
 * Return: address of the new element or NULL if not successfull
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);

}
