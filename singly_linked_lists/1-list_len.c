#include "lists.h"
/**
 *count_number - Function that counts number of nodes in h
 *@h: Working list
 *Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count_number = 0;

	while(h != NULL)
	{
		h = h->next;
		count_number++;
	}
	return (count_number);
}
