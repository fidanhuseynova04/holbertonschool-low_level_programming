#include "main.h"
#include <stdio.h>
/**
 * *_memcpy -  copies memory area.
 * @src: the size of the memory to print
 * @dest: the address of memory to print
 * @n: counter
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
