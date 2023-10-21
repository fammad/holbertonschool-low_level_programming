#include <stdio.h>
#include "main.h"
/**
 *_abs - making absolute number 
 *@var: is positive or negative nuber 
 *Description : A prgram that makes absolute value
 *Return: val
*/
int _abs(int val)
{
	if (val < 0)
	{
		val = val * (-1);
		return (val);
	}
	else
	{
		return (val);
	}
}
