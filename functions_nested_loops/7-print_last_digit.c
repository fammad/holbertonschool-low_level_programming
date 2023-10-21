#include <stdio.h>
#include "main.h"
/**
*_abs - Check if string is lowercase
*@v: the integer to be converted
*
*Description: Program of task 6
*Return: absolute value of the input
*/
int print_last_digit(int v)
{
	v = v%10;
	_putchar((v%10) + '0');
	return (v%10);
}
