#include <stdio.h>
#include "main.h"
/**
*_strchr - function that locates a character in a string
*@s: Variable
*@c: Variable
*A program that src string and dest string doing something.
*Return: Char
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
