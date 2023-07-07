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
	hash_node_t *head = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (head)
	{
		while (head)
		{
			if (strcmp(key, head->key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
				return (1);
			}
			head = head->next;
		}
	}
	head = malloc(sizeof(hash_node_t));
	if (head == NULL)
		return (0);
	head->key = strdup(key);
	head->value = strdup(value);
	head->next = ht->array[index];
	ht->array[index] = head;
	return (1);
}
