#include "lists.h"

/**
* print_dlistint - function to print list elements
* @h: pointer to a node of the list
* Return: Size of the list
*/

size_t print_dlistint(const dlistint_t *h)
{

size_t num = 0;
if (h == NULL)
return (num);
while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
num++;
}

return (num);
}
