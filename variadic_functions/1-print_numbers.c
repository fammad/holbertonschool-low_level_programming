#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <unistd.h>
void print_number(int n);
/**
 * print_numbers - Printing numbers
 * @seperator: Constant char
 * @n: Number of var
 * @...: Numbers
 * Return: Void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int cur_num;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		cur_num = va_arg(nums, int);
		print_number(cur_num);
		if (seperator == NULL || *seperator == '\0')
			continue;
		if (i != n - 1)
			printf("%s", seperator);
	}
	putchar('\n');
	va_end(nums);
}
/**
 * print_number - Print number
 * @n: Numbers
 * Return: Void
 */
void print_number(int n)
{
	printf("%d", n);
}
