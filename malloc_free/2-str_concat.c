#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int i;
	int len1;
	int len2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	ret = (char *)malloc((len1 + len2) * sizeof(char) + 1);
	if (ret == NULL)
		return (NULL);
	for(i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			ret[i] = s1[i];
		else
			ret[i] = s2[i];
	}
	ret[len1 + len2] = '\0';
	return (ret);
}
