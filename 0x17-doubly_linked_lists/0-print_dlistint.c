#include "lists.h"

/**
* print_dlistint - function to print list elements
* @h: pointer to a node of the list
* Return: Size of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
dlistint_t *head = h;

size_t num = 0;

while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
printf("%d\n", head->n);
head = head->next;
num++;
}

return (num);
}
