#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*_guess_squareroot - Return square root of n with guess parameter
*_sqrt_recursion - Function that douing something
*@n: Integer
 *@guess: Integer
 *Return: Squareroot of n
 *
*/
/**
*_sqrt_recursion - Return square root of n
*@n: Integer
*
*Return: Always 0
*/
int _sqrt_recursion(int n)
{
	return (_guess_squareroot(n, 1));
}

int _guess_squareroot(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	return (_guess_squareroot(n, guess + 1));
}
