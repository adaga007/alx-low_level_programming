#include "main.h"
/**
 * getLength - a funtion that gets the length of a string
 * @s: string
 * Return: length of a string
 */
int getLength(char *s)
{
	int length = 0;

	if (*s)
	{
	length = length + getLength(s + 1);
		return (length += 1);
	}
	return (0);
}
/**
 * checker - checks for palindrom
 * @i: integer i
 * @s: string
 * Return: 1 for success or 0 for failure
 */
int checker(int i, char *s)
{
	if (*s)
	{
		if (*s != s[getLength(s) - i])
		{
			return (0);
		}
		else
		{
			return (checker(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (checker(i, s));

}
