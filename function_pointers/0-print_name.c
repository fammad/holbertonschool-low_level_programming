#include <stdio.h>
#include "function_pointers.h"
#include <ctype.h>
/**
 * print_uppercase - Prints the name in uppercase
 * @name: The name to be printed in uppercase
 */
void print_uppercase(char *name)
{
	while (*name)
	{
		putchar(toupper(*name));
		name++;
	}
	putchar('\n');
}
/**
 * print_lowercase - Prints the name in lowercase.
 * @name: The name to be printed in lowercase.
 */
void print_lowercase(char *name)
{
	while (*name)
	{
		putchar(tolower(*name));
		name++;
	}
	putchar('\n');
}
/**
*print_name - Calls the specified printing function with the provided name.
 * @name: The name to be printed.
 * @f: Function pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	return;
	f(name);
}
