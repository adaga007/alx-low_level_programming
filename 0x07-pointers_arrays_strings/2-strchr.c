#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: Where to locate the value
 * @c: The value to be located
 * Return: s or null
 */


char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return (&s[++i]);
}
return (NULL);

}
