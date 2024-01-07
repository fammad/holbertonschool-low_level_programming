#include "lists.h"

/**
 * delete_nodeint_at_index - deleted the node at index
 * @head: pointer
 * @index: node that should be deleted
 * Return: 1 if it succeeded or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *temp;
	listint_t *node;

	temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	for (a = 0; a < index - 1 && temp != NULL && index != 0; a++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		node = temp->next;
		free(temp);
		*head = node;
	}
	else
	{
		if (temp->next == NULL)
			node = temp->next;
		else
			node = temp->next->next;
		free(temp->next);
		temp->next = node;
	}
	return (1);
}
