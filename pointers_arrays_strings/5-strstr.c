#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strstr - check the code
 * @haystack: char
 * @needle: char
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
	return (NULL);

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	if (*needle == '\0')
		return (haystack);
	return (NULL);
}
