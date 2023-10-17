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

	for (count = 0; count <= 9; count++)
	{
		putchar(count + '0');
		if (count < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
