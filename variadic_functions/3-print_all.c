#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints all
* @format: Variable
 * @...: Variables to print
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int n = 0;
	char *seperator = "";
	conv_t convs[] = {
		{ 'c', _print_char },
		{ 'i', _print_integer },
		{ 'f', _print_float },
		{ 's', _print_string },
		{ 0, NULL }
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		n = 0;
		while (convs[n].f != NULL && convs[n].type != *(format + i))
			n++;
		if (convs[n].f != NULL)
		{
			printf("%s", seperator);
			convs[n].f(&args);
			seperator = ", ";
		}
		i++;
	}
	va_end(args);
	putchar('\n');
}
/**
 * _print_char - Prints One  character
 * @args: Vargs prints thing
 * Return: Void
 */
void _print_char(va_list *args)
{
	char ch;

	ch = va_arg(*args, int);
	printf("%c", ch);
}
/**
 * _print_integer - Print integer
 * @args: va_list for  Arg
 * Return: Void
 */
void _print_integer(va_list *args)
{
	int i;

	i = va_arg(*args, int);
	printf("%d", i);
}
/**
 * _print_float - Print float
 * @args: va_list
 *
 * Return: Void
 */
void _print_float(va_list *args)
{
	float f;

	f = va_arg(*args, double);
	printf("%f", f);
}
/**
 * _print_string - Prints string
 * @args: va_list
 *
 * Return: always void
 */
void _print_string(va_list *args)
{
	char *str;

	str = va_arg(*args, char *);
	if (str == NULL || *str == '\0')
		str = "(nil)";
	printf("%s", str);
}
