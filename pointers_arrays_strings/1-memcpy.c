#include <stdio.h>
#include "main.h"
/**
*_memcpy - function that concatenate two strings to n number
*@dest: Variable
*@src: Variable
*@n: Variable
*A program that src string and dest string doing something.
*Return: Char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
