#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: Where to locate the value
 * @c: The value to be located
 * Return: s or null
 */


char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (NULL);

}
