#include "lists.h"

/**
* get_dnodeint_at_index - get the nth
* node of a dlistint_t linked list
* @head: pointer to a part of the node
* @index: index to the node to get
* Return: address to the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *h = head;
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
return (h);
return (NULL);
}
