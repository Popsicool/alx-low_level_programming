#include "lists.h"

/**
* add_dnodeint - add node to beginning of list
* @head: double pointer to head of the node
* @n: element to add to the list
* Return: pointer to the new node
*/


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *h = *head;
dlistint_t *a;
a = malloc(sizeof(dlistint_t));

if (a == NULL)
return (NULL);
if (h != NULL)
{
while (h->prev != NULL)
h = h->prev;
}

a->n = n;
a->prev = NULL;
a->next = h;
if (h != NULL)
{
h->prev = a;
}
*head = a;
return (a);

}
