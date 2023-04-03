#include "2-strchr.c"
#include <stdio.h>
/**
 * main - program
 * Return: 0 (success)
 */

int main(void)
{
char a[10] = "happy";
char b = 'y';
printf("what to find is %c\n", b);
char *result =  _strchr(a, b);
printf("Result is %c\n", *result);
return (0);
}
