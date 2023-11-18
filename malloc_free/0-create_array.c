#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - function that creates an array of chars, and initializes it with a specific char
 *@size: Variable integer
 *@c: Variable character
 *Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	  return (NULL);
	ar = (char *)malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
