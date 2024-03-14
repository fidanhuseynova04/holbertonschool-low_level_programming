#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - prints a grid of integers
 * @grid: grid
 * @height: height
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
