#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked- check the code
 * @b: b
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
