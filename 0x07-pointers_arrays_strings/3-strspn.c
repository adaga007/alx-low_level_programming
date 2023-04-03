#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: initial segment to return bytes from
 * @accept: prefix bytes
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, m;
	int result = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] != 32)
		{
			for (m = 0; accept[m] != '\0'; m++)
			{
				if (s[n] == accept[m])
					result++;
			}
		}
		else
			return (result);

	}
	return (result);
}
