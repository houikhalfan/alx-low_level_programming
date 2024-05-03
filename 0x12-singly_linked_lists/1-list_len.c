#include "lists.h"

/**
 * list_len - fct returns the num
 * @h: list
 * Return: num of nods
 */
size_t list_len(const list_t *h)
{
size_t c = 0;
while (h != NULL)
{
c++;
h = h->next;
}
return (c);
}
