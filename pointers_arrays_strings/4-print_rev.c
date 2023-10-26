#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*print_rev - does what it say
*@s: Variable
*Return:Lenght of interger
*/
void print_rev(char *s)
{
  	int lenght, cycle;

	lenght = strlen(s);
	for (cycle = lenght - 1; cycle >= 0; cycle--)
	{
		putchar(s[cycle];
	}
		putchar('\n');
}
