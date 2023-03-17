#include <stdlib.h>
#include <time.h>
/**
 * main - A program to determine negative and positive numbers
 * Return: 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative");
}
else
{
printf("%d is positive");
}
return (0);
}
