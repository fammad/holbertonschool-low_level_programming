#include <stdio.h>
/**
 * main - Entry point
 *
 * Desc:Something
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;

	for (count = 0; count <= 15; count++)
	{
	  if(count <=9)
		{
		  putchar(count + '0');
		}
	  else
		{
		  putchar('a' + count - 10);
		}
	}
	putchar('\n');
	return (0);
}
