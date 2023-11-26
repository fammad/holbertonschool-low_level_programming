#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "variadic_functions.h"
/**
 * print_strings - Do what it says
 * @seperator: Seperate between strings
 * @n: Number
 * @...: Strings
 * Return: Void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *cur_str;
	const char *sep_cp;
	char *nil, *nil_cp;

	nil = "(nil)";
	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		cur_str = va_arg(strs, char *);
		if (cur_str == NULL)
		{
			nil_cp = nil;
			while (*nil_cp)
				putchar(*nil_cp++);
		}
		else
		{
			while (*cur_str)
			{
				putchar(*cur_str++);
			}
		}
		if (seperator == NULL || *seperator == '\0')
			continue;
		sep_cp = seperator;
		while ((*sep_cp) && (i < (n - 1)))
			putchar(*sep_cp++);
	}
	putchar('\n');
}
