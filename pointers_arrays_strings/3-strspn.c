#include "main.h"
#include <stdio.h>
/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: Variable
 *@accept: Variable
 *Return: Unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;
	int c1, c2;

	if (*s == '\0' || *accept == '\0')
	{
		return (0);
	}
	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		for (c2 =0; accept[c2] != '\0'; c2++)
		{
			if (accept[c2] == s[c1])
			{
				break;
			}
		}
	}
	return (c1);
}
