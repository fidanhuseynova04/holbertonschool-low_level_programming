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

	for (i = 0; i < size * size; i += size + 1)
		primary_diag_sum += *(a + i);
	for (i = size - 1; i < size * size - 1; i += size - 1)
		secondary_diag_sum += *(a + i);
	printf("%d %d\n", primary_diag_sum, secondary_diag_sum);
}
