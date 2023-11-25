#include <stdio.h>
#include "dog.h"

/**
 *print_dog - fuction that prints struct dog
 *@d: Variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
	printf("Owner: (nil)\n");
}
