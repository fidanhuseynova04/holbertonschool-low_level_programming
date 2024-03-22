#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - prints an integer
 * @array: array
 * @size: size
 * @action: pointer func
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || size == 0 || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
		(*action)(*(array + (int)i));
}
