#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_diagsums - check the code
 * @a: two dimensional array
 * @size: size of each side of array
 */
void print_diagsums(int *a, int size)
{
	int i, primary_diag_sum = 0, secondary_diag_sum = 0;

	for (int i = 0; i < size; i++)
	{
		primary_diag_sum += *(a + i * size + i);
		secondary_diag_sum += *(a + i * size + (size - i - 1));
	}
	printf("%d %d\n", primary_diag_sum, secondary_diag_sum);
}
