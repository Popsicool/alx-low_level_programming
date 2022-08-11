#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a part of the list
 * @str: param str to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;
	size_t no;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	new->str = strdup(str);
	for (no = 0; str[no]; no++)
		;
	new->len = no;
	new->next = NULL;
	node = *head;
	if (node == NULL)
		*head = new;
	else
	{
		while (node->next != NULL)
		node = node->next;
		node->next = new;
	}
	return (*head);
}
