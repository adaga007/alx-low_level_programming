#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "3-get_op_func.c"
/**
 * main -  a program that performs simple operations.
 * @argc: arguments
 * @argv: array of args
 * Return: result
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a;
		int b;
		int (*func_ptr)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		func_ptr = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func_ptr(a, b));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
