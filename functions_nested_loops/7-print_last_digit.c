#include <stdio.h>
#include "main.h"
/**
*print_last_digit - Check if string is lowercase
*@v: the integer to be converted
*
*Description: Program of task 6
*Return: absolute value of the input
*/
int print_last_digit(int v)
{
  v = v % 10;
	if (v < 0 )
	{
		v = v * (-1);
	}
	_putchar(v + '0');
	return (v);
}
