#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print elements of a list
 * @h: list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int c = 0;
const dlistint_t *temp = h;
while (temp != NULL)
{
printf("%d\n", h->n);
temp = temp->next;
c++;
}
return (c);
}
