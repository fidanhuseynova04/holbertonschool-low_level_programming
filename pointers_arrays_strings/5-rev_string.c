#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - check the code.
 * @s: char
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char tmp;
	int i = 0, l;

	while (*(s + i) != '\0')
	{
		i++;
	}
	l = i;
	for (i = 0; i < 1 / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + l - i- 1);
		*(s + l - i - 1) = tmp;
	}
}
