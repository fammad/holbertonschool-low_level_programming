/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * @n: Unsigned long integer pointer
 * @index: index integer
 * Return: Integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, rev;

	size = sizeof(*n) * 8 - 1;
	if (index > size)
		return (-1);
	rev = 1 << index;
	*n = *n & ~rev;
	return (1);
}
