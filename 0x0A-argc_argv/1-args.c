#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
}
