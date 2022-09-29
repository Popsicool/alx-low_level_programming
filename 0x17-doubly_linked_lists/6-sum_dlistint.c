#include "lists.h"

/**
* sum_dlistint - add all the elements of a list
* @head: double pointer to head of the node
* Return:sum of the elements
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *h = head;

int sum = 0;
if (head == NULL)
return (sum);
while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
sum += h->n;
h = h->next;
}

return (sum);
}
