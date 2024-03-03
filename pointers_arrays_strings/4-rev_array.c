#include "main.h"
/**
 * reverse_array - print an array of integers
 * @a: array
 * @n: the number of elements to swap
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
		i++;
	}
}
