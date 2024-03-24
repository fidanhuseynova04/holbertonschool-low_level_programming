#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - print arguments
 * @format: format
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
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
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(args);
}
