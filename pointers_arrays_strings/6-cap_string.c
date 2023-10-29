#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
*cap_string - Making everything uppercase
*@str: Variable
*A program that src string and dest string doing something.
*Return: Void
*/
char *cap_string(char *str)
{

	int i = 0, j;
	char trigger[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (str[i + 1] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; trigger[j] != '\0'; j++)
			{
				if (trigger[j] == str[i])
				{
					str[i + 1] -= 32;
					break;
				}
			}
		}
		i++;
	}
	return (str);
}
