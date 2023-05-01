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

q = NULL;

while (*head != NULL)
{
t = (*head)->next;
(*head)->next = q;
q = *head;
*head = t;
}
(*head) = q;
return (*head);
}
