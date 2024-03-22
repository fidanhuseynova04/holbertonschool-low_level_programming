#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - check th code
 * @name: name of the person
 * @f: pointer func
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	(*f)(name);
}
