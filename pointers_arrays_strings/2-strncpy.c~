#include <stdio.h>
#include "main.h"
/**
*_strncat - Concatenate two strings to n number
*@dest: Variable
*@src: Variable
*@n: Variable
*A program that src string and dest string doing something.
*Return: Char
*/
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
