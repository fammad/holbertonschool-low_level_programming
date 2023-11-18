#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strdup - function that returns a pointer to a newly allocated space
 *@str: Variable for string
 *Return: char
 */
char *_strdup(char *str)
{
	char *arr;
	int i;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	arr = (char *)malloc((len) * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[len] = '\0';
	return (arr);
}
