#include "main.h"
#include <stdio.h>
/**
 *main - function for FuzzBuzz
 *Description: This is the main function where the program execution starts.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int cycle;

	for (cycle = 1; cycle <= 100; cycle++)
	{
		if (cycle % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (cycle % 3 == 0 && cycle % 5 != 0)
		{
			printf("Fizz ");
		}
		else if	(cycle % 5 == 0 && cycle % 3 != 0 && cycle != 100)
		{
			printf("Buzz ");
		}
		else if (cycle == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", cycle);
		}
	}
	printf("\n");
	return (0);
}
