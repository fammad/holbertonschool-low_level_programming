#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Variable
 *
 * Return: A pointer to the allocated memory.
 * 
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
