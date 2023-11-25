#include <stdio.h>
#include "dog.h"

/**
 *
 *
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %.2f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
	printf("Owner: (nil)\n");
}
