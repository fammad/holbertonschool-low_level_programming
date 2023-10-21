#include <stdio.h>
#include "main.h"
/**
 *_abs - making absolute number
 *@var: variable
 *Description : A program fot task 6
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
