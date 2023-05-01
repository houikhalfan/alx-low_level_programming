#include "lists.h"

/**
 * print_listint_safe - prints the list
 * @head: list
 * Return: length
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nu = 0;
long int f;
while (head)
{
f = head - (head->next);
nu++;
printf("[%p] %d\n", (void *)head, head->n);
if (f > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
return (nu);
}
