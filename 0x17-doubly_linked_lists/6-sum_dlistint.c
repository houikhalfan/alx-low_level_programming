#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data
 * @head: Pointer to the head of the linked list.
 * Return: Sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
int som = 0;
dlistint_t *tmp = head;
while (tmp != NULL)
{
som += tmp->n;
tmp = tmp->next;
}
return (som);
}
