#include <stdio.h>
#include "main.h"
/**
*_isalpha - Check if string is lowercase or uppecrcase
*@c: variable
*Description: Up or lowercase tast
*Return: 0 or 1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
