#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *head = NULL;

	if (ht == NULL)
		printf("{}\n");
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			head = ht->array[index];
			while (head)
			{
				printf("'%s': '%s', ", head->key, head->value);
				head = head->next;
			}
			head = NULL;
		}
	}
	printf("}\n");
}
