#include "lists.h"

/**
 * add_nodeint - add a node at the beginning
 * @head: pointer of the head of a list
 * @n: new node
 * Return: the add of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ad;
ad = malloc(sizeof(listint_t));
if (ad == NULL)
return (NULL);
ad->n = n;
ad->next = *head;
*head = ad;
return (ad);
}
