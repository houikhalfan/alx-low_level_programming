#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: list
 * Return: number of of elements
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;
if (h == NULL)
return (i);
while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
