#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * checker - check for strings
 * @str: strin
 * Return: 0
 */

int checker(char *str)
{
unsigned int i;

i = 0;
while (i < strlen(str))
{
if (!isdigit(str[i]))
{
return (0);
}
i++;
}
return (1);
}

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])

{

	int i;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (checker(argv[i]))

		{
			sum += atoi(argv[i]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
