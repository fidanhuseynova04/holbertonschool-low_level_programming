#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - check the code
 * @s: pointer
 * @accept: pointer
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*(s) != '\0')
	{
		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*(s) == *(accept + i))
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
