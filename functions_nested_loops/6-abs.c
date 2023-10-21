#include <stdio.h>
#include "main.h"
/**
 *_abs - a function checking the value is +- and making it +
 *@var : is variable
 *Description : A prgram that makes absolute value
 *Return: 0
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
