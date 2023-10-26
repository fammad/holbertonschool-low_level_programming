#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*puts2 - does what it say
*@str: Variable
*Return:Lenght of interger
*/
void puts2(char *str)
{
	int cy;
	int len = strlen(str);

	for (cy = 0; cy < len; cy++)
	{
		if (cy % 2 == 0)
		{
			printf("%c", str[cy]);
		}
	}
	putchar('\n');
}
