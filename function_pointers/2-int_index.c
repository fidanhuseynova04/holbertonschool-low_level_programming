#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - check if a number is equal to 98
 * @array: array
 * @size: size
 * @cmp: pointer func
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
