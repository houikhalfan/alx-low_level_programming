#include "lists.h"

/**
 * print_list - fct prints elements of list
 * @h: list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
size_t c = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
c++;
h = h->next;
}
return (c);
}


