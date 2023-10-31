#include <stdio.h>
#include "main.h"
/**
*print_diagsums - function that searches a string for any of a set of bytes
*@a: Variable
*@size: Variable
*A program that src string and dest string doing something.
*Return: Void
*/
void print_diagsums(int *a, int size) {
	int primary_sum = 0;
	int secondary_sum = 0;
	int i;

	for (i = 0; i < size; i++)
		primary_sum += a[i * size + i];
		secondary_sum += a[i * size + (size - 1 - i)];
    }
	printf("%d\n", primary_sum);
	printf("%d\n", secondary_sum);
}
