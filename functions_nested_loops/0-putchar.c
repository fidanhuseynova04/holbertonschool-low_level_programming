#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "_putchar";
	int b = strlen(a);
	int i;

	for (i = 0; i < b; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
