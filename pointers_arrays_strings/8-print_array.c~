#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*puts_half - does what it say
*@str: Variable
*Return:Lenght of interger
*/
void puts_half(char *str)
{
	int cy;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		for (cy = len / 2; cy < len; cy++)
		{
			printf("%c", str[cy]);
		}

	}
	else
	{
		for (cy = (len - 1) / 2 + 1; cy < len; cy++)
		{
			printf("%c", str[cy]);
		}
	}
	putchar('\n');
}
