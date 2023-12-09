#include "lists.h"
/**
 *add_node - Function that adds a new node
 *@head: Working list
 *@str: Added string
 *Return: new Node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
	current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
	}
	current->next = new_node;
	return (new_node);
}
