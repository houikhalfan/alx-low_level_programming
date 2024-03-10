#include "hash_tables.h"

/**
 * hash_table_get - searche for item
 * @ht: hash table
 * @key: key
 * Return: item->value or null if didn't find any thing
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int idx;

	if (!ht || !key || *key == '\n' || !ht->array || !ht->size)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	item = ht->array[idx];
	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
