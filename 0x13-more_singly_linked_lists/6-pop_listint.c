#include "lists.h"

/**
 * pop_listint - free first node
 * @head: list
 * Return: int of the removed node
 */
int pop_listint(listint_t **head)
{
int nod;
if (*head == NULL)
return (0);
nod = (*head)->n;
free(*head);
return (nod);
}
