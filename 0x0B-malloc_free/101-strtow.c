#include <stdlib.h>
#include "main.h"
/**
 * helper - helper function
 * @s: string
 * Return: number of words
 */
int helper(char *s)
{
		int flag, c, w;

		flag = 0;
		w = 0;

		for (c = 0; s[c] != '\0'; c++)
		{
			if (s[c] == ' ')
			flag = 0;
			else if (flag == 0)
			{
				flag = 1;
				w++;
			}
		}
		return (w);
}
/**
 * strtow - a function that splits a string into words.
 * @str: string
 * Return: pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **mtx, *tmp;

	int i, k = 0, ln = 0, words, c = 0, start, end;

	while (*(str + ln))
	ln++;
	words = helper(str);
	if (words == 0)
	return (NULL);
	mtx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mtx == NULL)
	return (NULL);
for (i = 0; i <= ln; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
mtx[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
mtx[k] = NULL;
return (mtx);
}
