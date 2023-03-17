#include <stdio.h>
/**
 * main - print the alphabet
 *Return: 0 (succses)
 */
int main(void)
{
char alp[25] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 25; i++)
{
putchar(alp[i]);
}
putchar('\n')
return (0);
}
