#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_print_rev_recursion - function that prints a string in reverse
 *@s: Variable
 *Return: Void
 *
*/
void _print_rev_recursion(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++, len--)
	{
		char temp = s[i];
		s[i] = s[len-i];
		s[len] = temp;
	}
}
