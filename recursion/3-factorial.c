#include <stdio.h>
#include "main.h"
/**
 *factorial - function for finding a factoreial to n mumber
 *@n: Variable for lenght
 *Return: Integer
 *
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n * factorial(n - 1));
}
