#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Desc:Something
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n%10;
	if (n > 5)
	{
	printf("Last Digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (n < 6 && n != 0)
	{
	printf("Last Digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	else
	{
	printf("Last Digit of %d is %d and and is 0\n", n, digit);
	}
	return (0);
}