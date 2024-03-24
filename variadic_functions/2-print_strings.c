#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - check the code
 * @separator: separotor
 * @n: number of variable
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*)
		{
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
