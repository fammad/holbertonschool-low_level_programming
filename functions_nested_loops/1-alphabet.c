#include <stdio.h>
/**
 * main - Entry point
 *
 * Desc:Something
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
  char count;
  
  for (count = 'a'; count <= 'z'; count++)
	{
		putchar(count);
		if (count == 'z')
   		{
		printf("\n");
		}
	}
}
