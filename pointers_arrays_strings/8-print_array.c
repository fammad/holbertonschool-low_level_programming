#include <stdio.h>
#include "main.h"
/**
*print_array - does what it say
*@a: Variable
*@n: Variable
*Return: Something
*/
void print_array(int *a, int n)
{
	int cy;

	for (cy = 0; cy < n; cy++)
	{
		printf("%d", a[cy]);
		if (cy != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
