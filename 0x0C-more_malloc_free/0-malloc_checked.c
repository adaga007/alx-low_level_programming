#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: int
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{

	void *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);

	return (pt);
}
