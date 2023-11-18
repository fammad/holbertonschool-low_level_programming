#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strdup - function that returns a pointer to a newly allocated space in memory
 *@str: Variable for string
 *Return: char
 */
char *_strdup(char *str)
{
	char *arr;
	int i;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);
	arr = (char *)malloc(len * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[len] = '\0';
	return (arr);
}
