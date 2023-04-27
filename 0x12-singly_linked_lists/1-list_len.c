#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len -  a function that returns the number
 * of elements in a linked list_t list.
 * @h: head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
