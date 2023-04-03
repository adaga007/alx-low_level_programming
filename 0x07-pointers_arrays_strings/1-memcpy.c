#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: where you are taking the copied value to
 * @n: how many bytes do you want to copy
 * @src: the memory area to copy from
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}

	return (dest);
}
