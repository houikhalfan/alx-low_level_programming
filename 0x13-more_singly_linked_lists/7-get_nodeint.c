#include "lists.h"

/**
 * get_nodeint_at_index - find the nth of the list
 * @head: list
 * @index: the index
 * Return: the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; i < index; i++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
