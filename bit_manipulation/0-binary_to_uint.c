#include "main.h"
/**
 *
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i, digit;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		digit = b[i] - '0';
		result <<= 1;
		result += digit;
	}
	return (result);
}
