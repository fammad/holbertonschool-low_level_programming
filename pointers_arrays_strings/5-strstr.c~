#include <stdio.h>
#include "main.h"
/**
*_strpbrk - function that searches a string for any of a set of bytes
*@s: Variable
*@accept: Variable
*A program that src string and dest string doing something.
*Return: Char
*/
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr;
	char *a_ptr;

	for (s_ptr = s; *s_ptr; s_ptr++)
	{
		for (a_ptr = accept; *a_ptr; a_ptr++)
		{
			if (*s_ptr == *a_ptr)
			{
				return (s_ptr);
			}
		}
	}
	return (NULL);
}

