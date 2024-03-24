#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints all
 * @format: format
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, k = 0;
	char *s;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			k = 1;
			i++;
			switch (format[i - 1])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char*);
					if (!s)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					continue;
			}
			while (k && format[i])
				printf(", "), k = 0;
		}
	}
	printf("\n");
	va_end(args);
}
