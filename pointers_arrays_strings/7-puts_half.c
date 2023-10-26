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

	for (cy = len / 2; cy < len; cy++)
	{
		if (cy % 2 == 0)
		{
			printf("%c", str[cy]);
		}
		else
		{
		  printf("%c", str[cy-1]);
		}
	}
	putchar('\n');
}
