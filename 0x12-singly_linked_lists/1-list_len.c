#include "lists.h"

/**
 * list_len - prints the number of elements in the list
 * @h: pointer to the  singly linked list
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
