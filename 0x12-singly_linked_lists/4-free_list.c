#include "lists.h"

/**
 * free_list - free a list
 * @head: pointer to the list to be head of the linked list
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
