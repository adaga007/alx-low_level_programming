#include "main.h"
/**
 * _memset - program that fills memory with a constant byte.
 * @s: start address
 * @b: Value
 * @n: number of values to put
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
