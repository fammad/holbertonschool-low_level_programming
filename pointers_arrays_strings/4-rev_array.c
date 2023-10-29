#include <stdio.h>
#include "main.h"
/**
*reverse_array - Comparing one to the another
*@a: Variable
*@n: Variable
*A program that src string and dest string doing something.
*Return: Void
*/
void reverse_array(int *a, int n)
{
	int start = 0;
	int endp = n - 1;

	while (start < endp)
	  {
		int temp = a[start];

		a[start] = a[endp];
		a[endp] = temp;
		start++;
		endp--;
	  }
}
