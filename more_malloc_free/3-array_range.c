#include <stdlib.h>
#include "main.h"
/**
* array_range - Creates an array of integers.
* @min: Minimum
* @max: Maximum
* Return: A pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int *result;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	result = malloc(size * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		result[i] = min++;

	return (result);
}
