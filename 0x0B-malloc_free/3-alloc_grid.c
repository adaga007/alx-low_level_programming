#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: array width
 * @height: array height
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
	int **th;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	th = (int **)malloc(sizeof(int *) * height);
	if (th == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		th[i] = (int *)malloc(sizeof(int) * width);
		if (th[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(th[j]);
			}
			free(th);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			th[i][j] = 0;

	return (th);
}
