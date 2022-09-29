#include "lists.h"

/**
* insert_dnodeint_at_index - function that inserts
* a new node at a given position.
* @h: double pointer to a part of the node
* @idx: index to add the node
* @n: element of the node to add
* Return:address of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *head = *h;
dlistint_t *a, *b;
unsigned int pos = 0;

a = malloc(sizeof(dlistint_t));
if (a == NULL)
return (NULL);
if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;
}

while (head != NULL && pos != (idx - 1))
{
head = head->next;
pos++;
}
if (pos == (idx - 1))
{
b = head->next;
head->next = a;
a->prev = head;
a->n = n;
a->next = b;
b->prev = a;
return (a);
}

return (NULL);
}
