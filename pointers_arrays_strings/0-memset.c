#include "main.h"
#include <stdio.h>
/**
 *_memset is a fucntion that fills the space
 *@s Variable
 *@b Variable
 *@n Variable
 *Return: A char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
