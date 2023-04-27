#include "lists.h"

/**
 * _strl - length
 * @str: string
 * Return: length of strg
 */
int _strl(const char *str)
{
int l;
for (l = 0; str[l] != '\0'; l++)
;
return (l);
}

/**
 * add_node_end - add a new node at the end
 * @head: linked list
 * @str: new node
 * Return: add of new elm
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tmpo, *new_no;
if (str == NULL)
return (NULL);
if (strdup(str) == NULL)
return (NULL);
new_no = malloc(sizeof(list_t));
if (new_no == NULL)
return (NULL);
new_no->str = strdup(str);
new_no->len = _strl(str);
new_no->next = NULL;
if (*head == NULL)
*head = new_no;

else
{

tmpo = *head;

while (tmpo->next != NULL)
tmpo = tmpo->next;
tmpo->next = new_no;
}
return (new_no);
}
