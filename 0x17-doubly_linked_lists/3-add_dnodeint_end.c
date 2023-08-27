#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Value to store in the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev == NULL;
*head = new;
return (new);
}
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
new->prev = tmp;
return (new);
}
