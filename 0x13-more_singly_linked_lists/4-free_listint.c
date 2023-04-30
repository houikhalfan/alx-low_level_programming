#include "lists.h"

/**
 * free_listint - free the list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
listint_t *tess;
while (head)
{
tess = head->next;
free(head);
head = tess;
}
}
