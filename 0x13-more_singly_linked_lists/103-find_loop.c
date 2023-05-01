#include "lists.h"
/**
 * find_listint_loop - finds the loop in a list
 * @head: list
 * Return: where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *t, *q;
if (head == NULL || head->next == NULL)
return (NULL);
t = head->next;
q = (head->next)->next;

while (q)
{
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
t = t->next;
q = (q->next)->next;
}
return (NULL);
}
