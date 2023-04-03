#include "main.h"
#include <stdlib.h>
/**
* _strstr - a function that locates a substring
*
* @haystack: search location
* @needle: search key
*
* Return: result or null
*/

char *_strstr(char *haystack, char *needle)
{
	int k;
	int key = 0;

	while (needle[key] != '\0')
		key++;

	while (*haystack)
	{
		for (k = 0; needle[k]; k++)
		{
			if (haystack[k] != needle[k])
				break;
		}
		if (k != key)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
