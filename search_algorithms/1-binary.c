#include "search_algos.h"
/**
 * print_array - print the value of the array
 * @array: given array
 * @left: left index
 * @right: right index
 * Return: Nothing
 */
void print_array(int *array, int left, int right)
{

	while (left <= right)
	{
		if (left < right)
			printf("%d, ", array[left]);
		else
			printf("%d", array[left]);
		left = left + 1;
	}
	printf("\n");
}
/**
 * binary_search - binary search on the given array
 * @array: array
 * @size: asize
 * @value: value for search
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int begin, end, middle;

	if (array == NULL)
		return (-1);

	begin = 0;
	end = (int)size - 1;
	while (begin <= end)
	{
		printf("Searching in array: ");
		print_array(array, begin, end);
		middle = (double)((begin + end) / 2);
		if (array[middle] == value)
			return ((int)middle);
		else if (value > array[middle])
			begin = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}
