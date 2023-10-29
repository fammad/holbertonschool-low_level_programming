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
	int capitalize = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]) || str[i] == '\n' || i == 0)
		{
			capitalize = 1;
		}
		else if (isalpha(str[i]))
		{
			if (capitalize)
			{
				str[i] = toupper(str[i]);
				capitalize = 0;
			}
			else
			{
				str[i] = tolower(str[i]);
			}
		}
	}
	return (str);
}
