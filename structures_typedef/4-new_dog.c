#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - fuction that prints a new dog
 *@name: char pointer
 *@age: float
 *@owner: char pointer
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *ret;

	ret = malloc(sizeof(dog_t));
	if (ret == NULL)
		return (NULL);
	ret->name = malloc(strlen(name) + 1);
	ret->owner = malloc(strlen(owner) + 1);
	if (ret->owner == NULL || ret->name == NULL)
	{
		free(ret->name);
		free(ret->owner);
		free(ret);
		return (NULL);
	}
	strcpy(ret->name, name);
	strcpy(ret->owner, owner);
	ret->age = age;
	return(ret);
}
