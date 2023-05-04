#include "main.h"
#include "2-get_bit.c"
/**
 * clear_bit -  a function that sets the
 * value of a bit to 0 at a given index.
 * @n: The integer we want to work on
 * @index: postion in the integer we will work on
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
