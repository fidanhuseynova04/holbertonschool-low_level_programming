#include "main.h"
#include <string.h>

/**
 * _puts - check the code.
 * @str: char
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
