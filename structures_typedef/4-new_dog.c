#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - check the code
 * @name: name of dog
 * @age: age of dog
 * @owner: ownerof dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	namelen = strlen(name);
	(*dog).name = malloc(sizeof(char) * (namelen + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).age = age;
	owerlen = strlen(owner);
	(*dog).owner = malloc(strlen(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free((*dog).owner), free((*dog).name), free(dog);
		return (NULL);
	}
	strcpy((*dog).name, name), strcpy((*dog).owner, owner);
	return (dog);
}
