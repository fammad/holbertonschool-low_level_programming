#include "main.h"
#include <stlib.h>
#include <stdio.h>
/**
 *create_array - function that creates an array of chars, and initializes it with a specific char
 *@size: Variable integer
 *@c: Variable character
 *Return: char
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *ar = (char *)malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	unsigned int i;
	
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
