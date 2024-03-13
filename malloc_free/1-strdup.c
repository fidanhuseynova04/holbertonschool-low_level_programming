#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *arr;
	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	
	while (*(str + i))
		i++;

	arr = malloc(sizeof(char) * i + 1);
	
	if (arr == NULL)
	{
		return (NULL);
	}
	
	while (j < i)
	{
		arr[j] = *(str + j);
		j++;
	}

	arr[i] = '\0';
	return (arr);
}
