#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *free_dog - fuction that frees dog
 *@d: dog_t structure
 *Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
