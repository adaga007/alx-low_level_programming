#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: list to search, it also the first node in list
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *ft = head;

	if (!head)
		return (NULL);
	while (ft && sl && ft->next)
	{
		ft = ft->next->next;
		sl = sl->next;
		if (ft == sl)
		{
			sl = head;
			while (sl != ft)
			{
				sl = sl->next;
				ft = ft->next;
			}
			return (ft);
		}
	}
	return (NULL);
}
