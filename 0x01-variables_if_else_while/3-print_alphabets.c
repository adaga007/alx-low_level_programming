#include <stdio.h>
/**
 * main - a programm
 * Return: 0 (success)
 */
int main(void)
{
int a = 97;
int b = 65;
while (a <= 122)
{
putchar(a);
a++;
}
while (b <= 90)
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
