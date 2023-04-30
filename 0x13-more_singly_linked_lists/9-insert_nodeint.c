#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at index position
 * @head: list
 * @idx: index
 * @n: data of the new node
 * Return: add of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *t = *head, *nod;
unsigned int i;
nod = malloc(sizeof(listint_t));
if (nod == NULL)
return (NULL);
nod->n = n;
if (idx == 0)
{
nod->next = t;
*head = nod;
return (nod);
}
for (i = 0; i < idx - 1; i++)
{
if (t == NULL || t->next == NULL)
return (NULL);
t = t->next;
}
nod->next = t->next;
t->next = nod;
return (nod);
}
