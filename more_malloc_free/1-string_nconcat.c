#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *string_nconcat - check the code
 * @s1: s1
 * @s2: s2
 * @n: count of elements from 2nd string
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *str;

	while (*(s1 + i))
	{
		i++;
	}
	while (*(s2 + j))
	{
		j++;
	}
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (n >= j)
		n = j;
	str = malloc(sizeof(char) * (i + j) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (k < (i + n))
	{
		if (k < i)
			*(str + k) = *(s1 + k);
		else
			*(str + k) = *(s2 + k - i);
		k++;
	}
	str[k] = '\0';
	return (str);
}

