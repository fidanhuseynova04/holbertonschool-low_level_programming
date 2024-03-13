#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *str_concat - check the code
 * @s1: first string
 * @s2: second string
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, size = 0;
	char *str;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		while (*(s1 + size1))
			size1++;
	}
	if (s2 == NULL)
		size2 = 0;
	else
	{
		while (*(s2 + size2))
			size2++;
	}
	str = malloc(sizeof(char) * (size1 + size2) + 1);
	if (str == NULL)
		return (NULL);

	while (size != size1 + size2)
	{
		str[size] = s2[size - size1];
		size++;
	}
	str[size] = '\0';
	return (str);
}
