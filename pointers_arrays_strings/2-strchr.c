#include "main.h"
#include <stdio.h>
/**
 * *_strchr - check the code
 * @s: pointer
 * @c: variable
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	for (i; s[i]; i++)
	{
	}
	for (j; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	return (NULL);
	}
}
