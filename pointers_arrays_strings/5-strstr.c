#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*_find_substring - function that searches a string for any of a set of bytes
*@text: Variable
*@substring: Variable
*A program that src string and dest string doing something.
*Return: Char
*/
char *_strstr(char *haystack, char *needle)
{
	size_t text_len = strlen(haystack);
	size_t sub_len = strlen(needle);
	size_t i;
	
	if (sub_len == 0)
	{
		return (haystack);
    }
    if (text_len < sub_len)
	{
		return (NULL);
	}
	for (i = 0; i <= text_len - sub_len; i++)
	{
		if (strncmp(haystack + i,needle, sub_len) == 0)
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
