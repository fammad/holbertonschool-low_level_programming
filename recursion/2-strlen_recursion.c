#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strlen_recursion - function that returns the lenght of the string
 *@s: Variable
 *Return: Lenght of the s string
 *
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	return (1 + _strlen_recursion(s+1);
}
