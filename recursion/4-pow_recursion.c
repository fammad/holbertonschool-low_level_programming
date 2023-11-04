#include <stdio.h>
#include "main.h"
/**
 *_pow_recursion - function find to return  x power of y
 *@x: Variable
 *@y: Variable
 *Return: Void
 *
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
