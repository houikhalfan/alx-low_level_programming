#include "lists.h"

/**
 * pop_listint - free first node
 * @head: list
 * Return: int of the removed node
 */
int pop_listint(listint_t **head)
{
listint_t *t;	
int nod;
if (*head == NULL)
return (0);
t = *head;
nod = (*head)->n;
*head = (*head)->next;
free(t);
return (nod);
}
