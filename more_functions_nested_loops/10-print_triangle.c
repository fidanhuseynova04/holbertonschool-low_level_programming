#include "main.h"

/**
 * print_triangle - check the code.
 * @size: variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < 1; j++)
		{
			_putchar('#');
		}
		if (i != size)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
