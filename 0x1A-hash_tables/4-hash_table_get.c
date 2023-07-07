#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key of element
 *
 * Return: value of  @key or NULL if it fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!(ht && key && *key))
		return (NULL);
	index = key_index((unsigned const char *)key, ht->size);
	node = ht->array[index];
	if (node)
	{
		while (node)
		{
			if (strcmp(key, node->key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
