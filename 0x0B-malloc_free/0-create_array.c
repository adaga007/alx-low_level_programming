#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  creates an array of chars, and initializes
 * it with a specific char.
 * @size: array size
 * @c: char
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	ch = malloc(sizeof(char) * size);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
