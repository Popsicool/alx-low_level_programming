#include "lists.h"

/**
* dlistint_len - function to print list elements
* @h: pointer to a node of the list
* Return: Size of the list
*/

size_t dlistint_len(const dlistint_t *h)
{


size_t num = 0;
if (h == NULL)
return (num);

while (h->prev != NULL)
{
h = h->prev;
}

while (h != NULL)
{
h = h->next;
num++;
}

return (num);
}
