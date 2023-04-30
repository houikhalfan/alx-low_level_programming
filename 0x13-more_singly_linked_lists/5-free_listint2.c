#include "lists.h"

/**
 * free_listint2 - free list
 * @head: list
 */
void free_listint2(listint_t **head)
{
listint_t *tess;
if (head == NULL)
return;
while (*head != NULL)
{
tess = *head;
*head = tess->next;
free(tess);
}
}
