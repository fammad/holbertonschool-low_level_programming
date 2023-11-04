#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*_guess_squareroot - Return square root of n with guess parameter
 *@n: Variable
 *@guess: Variable
 *Return: Squareroot of n
 *
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
