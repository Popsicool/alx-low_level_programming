#include "lists.h"

/**
* delete_dnodeint_at_index - function that deletes
* the node at index index of a dlistint_t linked list.
* @head: double pointer to a part of the node
* @index: index to add the node to delete
* Return: 1 (successful) or -1 !(sucessful)
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *h = *head;
dlistint_t *a;
unsigned int pos = 0;

if (h != NULL)
{
while (h->prev != NULL)
h = h->prev;
}
while (h != NULL && pos != index)
{
h = h->next;
pos++;
}
if (pos == index)
{
a = h->next;
if (h->prev != NULL)
{
h->prev->next = a;
a->prev = h->prev;
}
else
a->prev = NULL;
free(h);
return (1);
}
return (-1);
}
