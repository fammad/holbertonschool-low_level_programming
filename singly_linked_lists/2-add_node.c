#include "lists.h"
/**
 *list_len - Function that counts number of nodes in h
 *@h: Working list
 *Return: Number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if(new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(len);
	new_node->next = *head;
	*head = new_node;
	
	return (new_node);
}
