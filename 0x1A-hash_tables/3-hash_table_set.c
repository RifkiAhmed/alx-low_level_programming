#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key of node
 * @value: value of node
 *
 * Return: 1 else 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int index;

	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	ht->array[index] = node;
	return (1);
}
