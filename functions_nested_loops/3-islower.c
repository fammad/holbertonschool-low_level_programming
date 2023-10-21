#include <stdio.h>
#include "main.h"
/**
 *_islower -checks for lowercases
 * c value is interger that we checking
 * returnv vaule is the result that if the value is lowercase or not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
