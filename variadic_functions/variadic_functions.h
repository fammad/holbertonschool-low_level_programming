#ifndef VAR_FUNC
#define VAR_FUNC
#include <stdarg.h>
/**
 * struct print_convert_variable - Structure
 * @type: Variable
 * @f: Pointer Variable
 */
typedef struct print_convert_variable
{
	char type;
	void (*f)(va_list *);
} conv_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(int);
void _print_char(va_list *args);
void _print_integer(va_list *args);
void _print_float(va_list *args);
void _print_string(va_list *args);
#endif
