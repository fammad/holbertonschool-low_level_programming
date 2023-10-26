#include <stdio.h>
#include "main.h"
/**
 *_strcpy - is a fucntion that doimg something
 *@dest: Variable
 *@src: Variable
 *Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int cy;
	int lengh = strlen(src);
  
	for (cy = 0; cy < lengh; cy++)
	{
		dest[cy] = src[cy];
	}
	return(*dest);
}
