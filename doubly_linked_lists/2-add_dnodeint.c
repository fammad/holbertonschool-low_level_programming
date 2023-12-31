#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of list
 * @head: Head node
 * @n: Variable
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	new_n->prev = NULL;
	if (*head)
		(*head)->prev = new_n;
	*head = new_n;

	return (new_n);
}
