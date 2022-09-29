#include "lists.h"

/**
* dlistint_len - function to print list elements
* @h: pointer to a node of the list
* Return: Size of the list
*/

size_t dlistint_len(const dlistint_t *h)
{

dlistint_t *head = h;

size_t num = 0;

while (head->prev != NULL)
{
head = head->prev;
}

while (head != NULL)
{
head = head->next;
num++;
}

return (num);
}
