#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 * Return: A pointer to the newly allocated memory containing the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len_s1 = 0, len_s2 = 0, i, j;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	concatenated = malloc((len_s1 + n + 1) * sizeof(char));

	if (concatenated == NULL)
		return NULL;
	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
		concatenated[i + j] = s2[j];
	concatenated[i + j] = '\0';
	return concatenated;
}
