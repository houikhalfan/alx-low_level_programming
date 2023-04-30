#include "lists.h"

/**
 * listint_len - length of a list
 * @h: list
 * Return: the length of a list
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
