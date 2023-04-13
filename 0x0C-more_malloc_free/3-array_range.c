#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: smallest array integer
 * @max: largest array integer
 * Return: the pointer to the newly created array or NULL if min > max
 * or NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ar[j] = i;
		j++;
	}

	return (ar);
}
