#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - function doing what it says
 *@n : variable
 *
 *
 *
 */
void print_diagonal(int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		for (b = 0; b < n; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
