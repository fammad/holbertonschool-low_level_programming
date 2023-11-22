#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 *init_dog - Funciton that initialize the values
 *struct dog - Structure initialization
 *@d: Pointer Variable
 *@name: Pointer Variable
 *@age: Floatin Variable
 *@owner: Pointer Variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		printf("Ok\n");
	d->name = name;
	d->age = age;
	d->owner = owner;
}
