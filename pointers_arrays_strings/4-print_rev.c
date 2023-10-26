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
	for (cycle = 0; cycle < lenght; cycle++)
	{
		puts(s - (lenght - cycle)); 
	}
}
