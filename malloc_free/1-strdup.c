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
	int i, size;

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
	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}
