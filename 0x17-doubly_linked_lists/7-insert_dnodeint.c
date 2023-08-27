#include "lists.h"
/**
 * insert_dnodeint_at_index - add at index
 * @h: header
 * @idx: index
 * @n: node
 * Return: new nod or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp, *new;
unsigned int i = 0;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (idx == 0)
{
new->next = *h;
if (*h)
(*h)->prev = new;
*h = new;
return (new);
}
tmp = *h;
while (tmp && i < idx - 1)
{
tmp = tmp->next;
i++;
}
if (!tmp)
return (NULL);
new->next = tmp->next;
new->prev = tmp;
if (tmp->next)
tmp->next->prev = new;
tmp->next = new;
return (new);
}
