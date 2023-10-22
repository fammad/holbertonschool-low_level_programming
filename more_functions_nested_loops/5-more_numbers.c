#include "main.h"
#include <stdio.h>
/**
 *more_numbers - function doing what it says
 *
 *
 *
 *
 */
void more_numbers(void)
{
	int t, n;

	for (t = 0; t <= 9; t++)
	{
		for (n = 0; n <= 14; n++)
		  {
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
