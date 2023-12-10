#include <stdio.h>
#include "main.h"
/**
 * flip_bits - A function that gets the number of bits flipped form n to m
 * @n: Unsigned long Int
 * @m: Unsigned long INT
 * Return: Insigned Integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, res = n ^ m;

	while (res != 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
