#include "lists.h"

/**
 * _strl - find length
 * @str: string
 * Return: length
 */
int _strl(cont char *str)
{
int l;
for (l = 0; str[l] != '\0'; l++)
;
return (l);
}

/**
 * add_node - add at the beg of list
 * @head: linked list
 * @str: new node
 * Return: add of new elm, if fail NULL
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *nnode;
if (str == NULL)
return (NULL);
if (strdup(str) == NULL)
return (NULL);
nnode = malloc(sizeof(list_t));
if (nnode == NULL)
return (NULL);

nnode->str = strdup(str);
nnode->l = _strl(str);
if (head == NULL)
nnode->next = NULL;
else
nnode->next = *head;
*head = nnode;
return (nnode);
}

