#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - function that doing something (concat)
 *@s1: Variable
 *@s2: Variable
 *Return: Char
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int i, j;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	ret = (char *)malloc((len1 + len2) * sizeof(char) + 1);
	if (ret == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && i < len1; i++)
	{
		ret[i] = s1[i];
	}
	for (j = 0; s2 != NULL && j < len2; j++, i++)
	{
		ret[i] = s2[j];
	}
	ret[len1 + len2] = '\0';
	return (ret);
}
