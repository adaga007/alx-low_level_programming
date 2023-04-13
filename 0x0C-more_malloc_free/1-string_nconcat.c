#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: n amount of bytes
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int i, len1, len2;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	len1 = 0;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	while (s1[len1] != '\0')
		len1++;

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * n + len1 + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[i + len1] = s2[i];

	str[i + len1] = '\0';

	return (str);
}
