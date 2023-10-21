#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Desc:Something
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
  char count;
  
  for (count = 'a'; count <= 'z'; count++)
	{
		putchar(count);
	}
	putchar('\n');
}
