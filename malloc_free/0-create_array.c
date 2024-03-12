#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @c: char
 * @size: size of malloc
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}
