#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: the list
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		total++;
	}
	return (total);
}
