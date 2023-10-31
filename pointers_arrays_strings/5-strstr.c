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
char *find_substring(char *text, char *substring) {
	size_t text_len = strlen(text);
	size_t sub_len = strlen(substring);
	size_t i;
	
	if (sub_len == 0)
	{
		return (text);
    }
    if (text_len < sub_len)
	{
		return (NULL);
	}
	for (i = 0; i <= text_len - sub_len; i++)
	{
		if (strncmp(text + i, substring, sub_len) == 0)
		{
			return (text + i);
		}
	}
	return (NULL);
}
