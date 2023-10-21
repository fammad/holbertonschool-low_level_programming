#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - adds the tables
 *@n: variable
 *
 *
 */

void print_to_98(int n)
{
  if (n < 98)
	{
	  while (n == 98)
	{
		printf("%d, ", n);
		n++;
	}
	}
	else if (n > 98)
    {
		while (n == 98)
    {
        printf("%d, ", n);
        n--;
    }
    }
	else if (n == 98)
    {
     	printf("%d", n);
    }
	putchar('\n');
}
