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
	int cycle1;
	int cycle2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	  for (cycle1 = 0; cycle1 < size; cycle1++)
		{
			for (cycle2 = 0; cycle2 < size; cycle2++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
