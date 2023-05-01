#include "lists.h"

/**
 * free_listint_safe - free llist
 * @h: pointer to the first node
 * Return: length
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *t;
size_t l = 0;
int d;
if (!h || !*h)
return (0);
while (*h)
{
d = *h - (*h)->next;
if (d > 0)
{
t = (*h)->next;
free(*h);
*h = t;
l++;
}
else
{
free(*h);
*h = NULL;
l++;
break;
}
}
*h = NULL;
return (l);
}
