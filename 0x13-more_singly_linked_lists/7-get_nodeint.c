#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to the head node
 * @index: possition of the node to return
 * Return: node or null if node does not exit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;

	while (head)
	{
		if (index == position)
			return (head);

		head = head->next;
		position++;
	}
	return (NULL);
}
