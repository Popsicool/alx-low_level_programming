#include "lists.h"

/**
* free_dlistint - free a list
* @head: double pointer to a part of the node
* Return: none
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *h = head;
dlistint_t *a;
if (head == NULL)
return;

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
a = h->next;
free(h);
h = a;
}
}
