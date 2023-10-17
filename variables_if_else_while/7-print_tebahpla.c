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
	int alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
