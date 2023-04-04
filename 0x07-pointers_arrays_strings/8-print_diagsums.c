#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two d
 * iagonals of a square
 * matrix of integers
 *
 * @a: array
 * @size: array size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int total1 = 0;
	int total2 = 0;

	while (i <= (size * size))
	{
		total1 = total1 + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		total2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", total1, total2);
}
