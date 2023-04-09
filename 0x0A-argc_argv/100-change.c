#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for (Success) or 1 for (Error)
 */
int main(int argc, char *argv[])
{
int number;
int j;
int result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	result = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && number >= 0; j++)
	{
		while (number >= coins[j])
		{
			result++;
			number -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
