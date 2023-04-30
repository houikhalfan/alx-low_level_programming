#include "lists.h"


/**
 * add_nodeint_end - add node at the end
 * @head: head of the list
 * @n: new node to add
 * Return: add of the list or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nod, *l;
nod = malloc(sizeof(listint_t));
if (nod == NULL)
return (NULL);
nod->n = n;
nod->next = NULL;
if (*head == NULL)
*head = nod;
else
{
l = *head;
while (l->next != NULL)
l = l->next;

l->next = nod;
}
return (*head);
}
