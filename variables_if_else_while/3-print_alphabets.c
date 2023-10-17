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
	char lalphabet;
	char Ualphabet;

	for (lalphabet = 'a'; lalphabet <= 'z'; lalphabet++)
	{
	putchar(lalphabet);
	}
	for (Ualphabet = 'A'; Ualphabet <= 'Z'; Ualphabet++)
        {
        putchar(Ualphabet);
        }
        putchar('\n');
	return (0);
}
