#include "main.h"
#include <stdio.h>
/**
 *_isdigit - function checks if number is between 0-9
 *@c: variable
 *Return: 1 or 0
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
