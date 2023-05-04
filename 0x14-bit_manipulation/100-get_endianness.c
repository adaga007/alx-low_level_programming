#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 * a very cool function but a bit confusing
 * Return: 0 or 1 as the case may be
 */
int get_endianness(void)
{
	unsigned int result = 1;
	char *cAddress = (char *) &result;

	return (*cAddress);
}
