#include <stdio.h>
#include "main.h"
/**
*_abs - Check if string is lowercase
*@var: variable
*Description: Program of task 6
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
