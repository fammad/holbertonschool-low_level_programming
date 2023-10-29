#include "main.h"
#include <stdio.h>
/**
 * leet - Encodes a string .
 * @str: Variable
 *
 * Return: A pointer
 */
char *leet(char *str)
{
	char replacement[] = "aAeEoOtTlL";
	char encoded[] = "44337711";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; replacement[j] != '\0'; j++)
		{
			if (str[i] == replacement[j])
			{
				str[i] = encoded[j];
				break;
			}
		}
	}
	return str;
}
