#include "main.h"
#include <stdio.h>
/**
 *print_line - function doing what it says
 *@n : variable
 *
 *
 *
 */
void print_line(int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
