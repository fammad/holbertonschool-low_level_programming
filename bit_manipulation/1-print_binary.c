#include "main.h"
/**
 *print_binary - Function that prints binary to unsigned integer
 *@n: Unsigned long int
 *Return: Void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}
	char binary_str[CHAR_BIT * sizeof(unsigned long int) + 1];
	char *ptr = buffer + sizeof(buffer) - 1;

	*ptr-- = '\0';
	while (n > 0) {
	*ptr-- = n % 2 + '0';
	n >>= 1;
	}
	printf("%s", ptr + 1);
}
