#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *head = NULL, *next = NULL;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			head = ht->array[index];
			while (head)
			{
				next = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
