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
	int c1;

	if (*s == '\0' || *accept == '\0')
	{
		return (0);
	}
	while (*s != '\0')
	{
		for (c1 =0; accept[c1] != '\0'; c1++)
		{
			if (*s == accept[c1])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
    	{
    		return (count);
    	}
		count++;
		s++;
	}
	return (count);
}
