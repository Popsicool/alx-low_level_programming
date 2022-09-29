#include "lists.h"

/**
* add_dnodeint_end - add node to end of list
* @head: double pointer to a part of the node
* @n: element to add to the list
* Return: pointer to the new node
*/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *h = *head;
dlistint_t *a;
a = malloc(sizeof(dlistint_t));

if (a == NULL)
return (NULL);
if (h != NULL)
{
while (h->next != NULL)
h = h->next;
}

a->n = n;
a->next = NULL;
a->prev = h;
if (h != NULL)
{
h->next = a;
}
*head = a;
return (a);

}
