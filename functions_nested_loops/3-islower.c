#include <stdio.h>
#include "main.h"
/**
 *_islower -checks for lowercases
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
