#include <stdio.h>
#include "dog.h"
/**
 * init_dog - check the code
 * @d: struct dog
 * @name: name of dog
 * @age: age of th dog
 * @owner: owner of the dog
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
