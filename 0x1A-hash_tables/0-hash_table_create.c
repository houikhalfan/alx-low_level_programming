#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_create - creates a hash table
 * @size: size
 *
 * Return: pointer to new table created
 * hash table, or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);
if (size == 0)
return (NULL);

table->size = size;
table->array = calloc(size, sizeof(hash_node_t *));
if (table->array == NULL)
{
free(table);
return NULL;
}
return (table);
}
