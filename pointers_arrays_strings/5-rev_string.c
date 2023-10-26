#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*rev_string - does what it say
*@s: Variable
*Return:Lenght of interger
*/
void rev_string(char *s)
{
  int lenght = strlen(s);
	int start = 0;
	int end = lenght - 1;

	lenght = strlen(s);
	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end++;  
	}
		
}
