#include "main.h"
#include <stdio.h>
/**
 * *_strcat - check the code
 * @dest: pointer
 * @src: pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; *(dest + j) != 0; j++)
	{
	}
	for (i = 0; *(src + i) != 0; i++, j++)
	{
		*(dest + j) = *(src + i);
	}
	*(dest + j) = 0;
	return (dest);
}
