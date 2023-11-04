#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_sqrt_recursion - function that returns the square root of n
*_guess_squareroot - function that trying to guess root of n
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
