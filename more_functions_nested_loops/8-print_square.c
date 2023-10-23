#include "main.h"
#include <stdio.h>
/**
 *print_square - function doing what it says
 *@size : variable
 *
 *
 *
 */
void print_square(int size)
{
	int cycle;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	  for (cycle = 0; cycle < size; cycle++)
		{
			for (cycle = 0; cycle < size; cycle++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
