#include <stdio.h>
#include "main.h"
/**
 *_abs - a function checking the value is poitive or negative and making it if it is positive
 *@var : is variable
 *Description : A prgram that makes absolute value 
 *Return: only positive value
*/
int _abs(int val)
{
	if (val < 0)
	{
		val = val*(-1);	
		return (val);
	}
	else
	{
		return (val);
	}
}
