#include <stdio.h>
#include "main.h"
/**
 *is_prime_number - Function that return 1 if n is prime number
 *@n: Variable
 *Return: Interger
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}
/**
 *is_prime_helper - Function that divide int n to division in order to find the prime value
 *@n: Interger
 *@division: Interger
 *Return: Interger
 */
int is_prime_helper(int n, int division)
{
	if(division * division > n)
		return (1);
	if(n % division == 0)
		return (0);
	return (is_prime_helper(n, division + 1);
}
