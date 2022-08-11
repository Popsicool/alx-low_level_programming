#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the start of the list
 * @str: param str to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    size_t no;
    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);
    new->str = strdup(str);
    for (no=0; str[no]; no++)
        ;
    new->len = no;
    new->next = *head;
    *head = new;
    return (*head);
}