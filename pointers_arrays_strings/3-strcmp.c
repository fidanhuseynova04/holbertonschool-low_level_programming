#include "main.h"
#include <stdio.h>
/**
 * _strcmp - check the code
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) != 0 || *(s2 + i) != 0)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}

	return (0);
}
