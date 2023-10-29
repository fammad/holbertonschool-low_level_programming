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
	int i;
	int n;

	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	while (str[n] != '\0')
	{
		i = 0;
		while (a[i] != '\0')
		{
			if (str[n] == a[i])
			{
				str[n] = b[i];
			}
			i++;
		}
		n++;
	}
	return (str);
}
