#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - Function that Sum them all
 * @n: Variable
 * @...: The others
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
