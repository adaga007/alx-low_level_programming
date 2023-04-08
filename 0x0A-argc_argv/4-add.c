#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * checker - checking for string
 * @s: string
 * Return: boolean
 */
int checker(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main -  a program that adds positive numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char  *argv[])
{
	int i;
	int total = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (checker(argv[i]))
			{
				total += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", total);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}

}
