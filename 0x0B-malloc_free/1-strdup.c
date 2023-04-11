#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int ch = 0;
	char *cr;

	if (str == NULL)
		return (NULL);

	while (str[ch] != '\0')
		c++;

	cr = malloc(sizeof(char) * ch + 1);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < ch; i++)
		cr[i] = str[i];

	return (cr);

}
