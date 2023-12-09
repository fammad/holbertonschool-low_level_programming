#include "lists.h"
/**
 *print_list - function that prints all elements of list_t
 *@h: list_t valiable
 *Return: Lenght of the list_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
