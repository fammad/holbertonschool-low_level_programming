#include <stdio.h>
#include "main.h"
/**
*reverse_array - Comparing one to the another
*@a: Variable
*A program that src string and dest string doing something.
*Return: Void
*/
char *string_toupper(char *a)
{
	int start;

	for (start = 0; a[start] != '\0'; start++)
	{
		if (a[start] >= 'a' && a[start] <= 'z')
		{
			a[start] = a[start] - ('a' - 'A');
		}
	}
	return (a);
}
