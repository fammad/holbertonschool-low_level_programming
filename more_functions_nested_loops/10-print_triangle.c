#include "main.h"
#include <stdio.h>
/**
 *print_triangle - function doing what it says
 *@size : variable
 *
 *
 *
 */
void print_triangle(int size)
{
	int hash;
	int row;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= size - row; space++)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
