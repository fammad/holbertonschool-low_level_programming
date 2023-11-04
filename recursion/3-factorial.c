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
	else if (n == 1)
		return (0);
	else
		return (n * factorial(n - 1));
}
