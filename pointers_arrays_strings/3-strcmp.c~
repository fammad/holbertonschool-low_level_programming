#include <stdio.h>
#include "main.h"
/**
*_strncpy - Copying one to the another n number
*@dest: Variable
*@src: Variable
*@n: Variable
*A program that src string and dest string doing something.
*Return: Char
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
