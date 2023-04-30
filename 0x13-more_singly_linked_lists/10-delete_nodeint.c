#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at the location index
 * @head: list
 * @index: index
 * Return: 1 if it worked -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *t = *head, *n;
unsigned int i = 0;
if (t == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(t);
return (-1);
}
for (; i < index - 1; i++)
{

if (t->next == NULL)
return (-1);
t = t->next;
}
n = t->next;
t->next = n->next;
free(n);
return (1);
}
