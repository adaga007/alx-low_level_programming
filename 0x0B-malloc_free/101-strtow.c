#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * newFunc - helps strtow function
 * @word: count
 * @ln: length
 * @str: string to go through
 * @s: array
 * Return: char value
 */
char **newFunc(int word, int ln, char *str, char **s)
{
	int i, k, j;

	j = 0;
	for (i = 0; i < word; i++)
	{
		k = 0;
		for (; j < ln; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
			{
				s[i][k] = str[j];
				k++;
			}
			if (j != 0 && str[j] == ' ' && str[j - 1] != ' ')
			{
				j++;
				break;
			}
		}
		s[i][k + 1] = '\0';
	}
	s[word + 1] = NULL;
	return (s);
}
/**
 * strtow - a function that splits a string into words.
 * @str: string
 * Return: char value
 */
char **strtow(char *str)
{
int i, j, size, k, ln, word;
	char **s;

	if (str == NULL)
		return (NULL);
	ln = 0;
	word = 0;
	while (str[ln] != '\0')
	{
		if (str[0] != ' ')
		word++;
		if (str[ln] != ' ' && str[ln - 1] == ' ' && ln != 0)
			word++;
		ln++;
	}
	s = (char **)malloc(sizeof(char *) * word + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < word; i++)
	{
		size = 0;
		for (; j < ln; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
				size++;
			if (str[j] == ' ' && size > 0)
				break;
		}
		printf("%d\n", size);
		s[i] = (char *)malloc(sizeof(char) * size + 1);
		if (s[i] == NULL)
		{
			for (k = i - 1; k >= 0; k--)
				free(s[k]);
			free(s);
		}
	}
	s = newFunc(word, ln, str, s);
	return (s);
}
