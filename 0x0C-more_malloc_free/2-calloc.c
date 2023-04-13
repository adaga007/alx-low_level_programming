#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory using malloc
 * @nmemb: n number of elements
 * @size: byte size
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

char *ct;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ct = malloc(nmemb * size);
	if (ct == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ct[i] = 0;

	return (ct);
}
