#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatnates strings
 * @s1: string 1
 * @s2: string 2
 * Return: concated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ct;

	int i = 0;
	int ln1 = 0;
	int ln2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		ln1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		ln2++;
	}

	ct = malloc(sizeof(char) * (ln1 + ln2 + 1));
	if (ct == NULL)
		return (NULL);

	for (i = 0; i < ln1; i++)
	{
		ct[i] = s1[i];
	}

	for (i = 0; i < ln2; i++)
	{
		ct[i + ln1] = s2[i];
	}
	ct[i + ln1] = '\0';
	return (ct);
}
