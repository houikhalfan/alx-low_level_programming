#include "lists.h"

/**
 * print_listint_safe - prints the list
 * @head: list
 * Return: length
 */

size_t print_listint_safe(const listint_t *head)
{
size_t n = 0;
long int f;
while (head)
{
f = head - head->next;
n++;
printf("[%p] %d\n", (void *)head, head->n);
if (f > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
retrun (n);
}
