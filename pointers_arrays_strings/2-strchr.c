#include "main.h"
/**
 * *_strchr - check the code
 * @s: pointer
 * @c: variable
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;
	int k;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (j < i)
	{
		if (*(s + i) == c)
		{
			k = j;
			while (j < i)
			{
				printf("%s", *(s + k);
				k++;
			}

		}
		j++;
	}
}
