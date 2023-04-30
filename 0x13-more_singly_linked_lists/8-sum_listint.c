#include "lists.h"

/**
 * sum_listint - sum of all the data of a list
 * @head: list
 * Return: 0 or sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head->next != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
