#include <stdio.h>
#include "main.h"
/**
 *_strcat: is concatenates two strings
 *@dest: Variable
 *@src: Variable
 *Return: Char
*/
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;  
	}
	*dest = '\0';
	return (result);
}
