#include "lists.h"

/**
 * reverse_lisint - reverse list
 * @head: list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *q, *t;
if (head == NULL || *head == NULL)
return (NULL);
t = NULL;
while ((*head)->next != NULL)
{
q = (*head)->next;
(*head)->next = t;
t = *head;
*head = q;
}
(*head)->next = t;
return (*head);
}
