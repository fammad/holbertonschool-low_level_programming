#include "search_algos.h"
/**
 * linear_search - linear search for a given array
 * @array: given
 * @size: array size
 * @value: value 
 * Return: index number or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int elem, result = -1;

	if (array == NULL)
		return (-1);

	for (elem = 0; elem < (int)size; elem++)
	{
		printf("Value checked array[%d] = [%d]\n", elem, array[elem]);
		if (array[elem] == value)
		{
			result = elem;
			break;
		}
	}
	return (result);
}
