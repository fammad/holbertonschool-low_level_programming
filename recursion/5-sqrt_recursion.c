#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_sqrt_recursion - function that returns the square root of n
 *@n: Variable
 *Return: Squareroot of n
 *
*/
int _sqrt_recursion(int n)
{
  return (_guess_squareroot(n, 1));
}

int _guess_squareroot(int n, int quess)
{
	if (guess * guess = n)
  		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_guess_squareroot(n, quess + 1);
}
