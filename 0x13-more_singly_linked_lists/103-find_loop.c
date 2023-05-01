#include "lists.h"
/**
 * find_listint_loop - finds the loop in a list
 * @head: list
 * Return: where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *t, *q;
t = q = head;
while (q != NULL || t != NULL)
{
t = t->next;
q = q->next->next;
if (t == q)
{
t = head;
while (t != q)
{
t = t->next;
q = q->next;
}
return (t);
}
}
return (NULL);
}
