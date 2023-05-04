#include "main.h"
/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int. Nice function
 * @b: string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedInt = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			convertedInt = (x << 1) | 1;
		else if (*b == '0')
			convertedInt <<= 1;
		else
			return (0);
		b++;
	}
	return (convertedInt);
}
