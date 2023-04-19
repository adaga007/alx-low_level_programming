#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: array size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

if (array == NULL || action == NULL)
exit(98);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
