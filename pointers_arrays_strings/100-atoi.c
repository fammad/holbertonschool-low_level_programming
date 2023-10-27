#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *_atoi - is a fucntion that doimg something
 *@s: Variable
 *
 *Return: Interger
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			if (result > (2147483647 - digit) / 10)
			{
				if (sign == 1)
				{
					return (2147483647);
				}
				else
				{
					return (-2147483648);
				}
			}
			result = result * 10 + digit;
		}
		else if (result != 0)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}
