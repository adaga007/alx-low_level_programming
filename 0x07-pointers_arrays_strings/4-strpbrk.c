#include <stdlib.h>
#include "main.h"
/**
 * _strpbrk - a function that searchs a string for any of a set of bytes
 *
 * @s: input value
 * @accept: search key
 *
 * Return: return result or null
 */
char *_strpbrk(char *s, char *accept)
{
		int n;

		while (*s)
		{
			for (n = 0; accept[n]; n++)
			{
			if (*s == accept[n])
			return (s);
			}
		s++;
		}

	return (NULL);
}
