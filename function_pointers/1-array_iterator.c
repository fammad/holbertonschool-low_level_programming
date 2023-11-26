#include "function_pointers.h"

/**
 * array_iterator - Itirator function
 * @array:  An array pointer
 * @size:	Lenght
 * @action:  Void pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int x))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; ++i)
			action(array[i]);
	}
}
