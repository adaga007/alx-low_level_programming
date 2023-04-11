#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: arguments counter
 * @av: arguments vector
 * Return: pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int i;
	int j;
	int k = 0;
	int n;
	int m;
	int count = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;

		count++;
	}
	count++;
	arr = malloc(sizeof(char) * count);
	if (arr == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			arr[k] = av[n][m];
			k++;
		}
		arr[k] = '\n';
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
