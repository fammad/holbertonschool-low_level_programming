#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: Integer
 * @index: Integer
 * Return: Integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	a = a << index;
	*n |= a;
	return (1);
}
