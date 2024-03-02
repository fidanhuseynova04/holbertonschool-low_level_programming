#include "main.h"
#include <stdio.h>
/**
 * _atoi - check the code
 * @s: pointer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i, l = 0;
	unsigned int n = 0;

	for (i = 0; *(s + i) != 0; i++)
	{
		if (*(s + i) == 45)
		{
			l++;
		}
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			n = n * 10 + (*(s + i) - 48);

			if (*(s + i + 1) < 48 || *(s + i + 1) > 57)
			{
				break;
			}
		}
	}
	if (l % 2 == 1)
	{
		n = -n;
	}

	return (n);
}
