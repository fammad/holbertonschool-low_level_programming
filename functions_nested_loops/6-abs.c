#include <stdio.h>
#include "main.h"
/**
*_abs - Check if string is lowercase
*@v: the integer to be converted
*Description: Program of task 6
*Return: absolute value of the input
*/
int _abs(int v)
{
	if (v < 0)
	{
		v = v * (-1);
		return (v);
	}
	else
	{
		return (v);
	}
}
