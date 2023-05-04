#include "main.h"
/**
 * flip_bits - a function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: unsigned int value of number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int turns, counter = 0;

	turns = n ^ m;
	while (turns > 0)
	{
		counter += turns & 1;
		turns >>= 1;
	}
	return (counter);
}
