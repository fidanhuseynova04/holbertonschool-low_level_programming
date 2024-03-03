#include "main.h"
#include <stdio.h>
/**
 * *_strncat - check the code
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != 0; i++)
	{
	}
	for (j = 0; *(src + j) != 0 && j < n; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}
