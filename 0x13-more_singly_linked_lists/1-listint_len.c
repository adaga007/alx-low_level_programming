#include "lists.h"
/**
 * listint_len - a function that returns the
 * number of elements in a linked listint_t list.
 * @h: list
 * Return: Number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}
	return (total);
}
