#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*_sqrt_recursion - Function that douing something
*@n: Integer
*Return: Squareroot of n
*/
int _sqrt_recursion(int n)
{
	return (_guess_squareroot(n, 1));
}


/**
*_guess_squareroot - Return square root of n with guess parameter
*@n: Integer
*@guess: Integer
*
*Return: Squareroot of n with guess
*/
int _guess_squareroot(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	return (_guess_squareroot(n, guess + 1));
}
