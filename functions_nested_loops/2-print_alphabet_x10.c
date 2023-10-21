#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print characters of alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char count;
	int step = 1;

	while (step <= 10)
	{

		for (count = 'a'; count <= 'z'; count++)
		{
			putchar(count);
		}
		putchar('\n');
		step++;
	}
}
