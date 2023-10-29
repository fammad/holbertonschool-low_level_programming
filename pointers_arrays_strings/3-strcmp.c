#include <stdio.h>
#include "main.h"
/**
*_strcmp - Comparing one to the another
*@s1: Variable
*@s2: Variable
*A program that src string and dest string doing something.
*Return: Int
*/
int _strcmp(char *s1, char *s2)
{
  while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 -*s2);	
}
