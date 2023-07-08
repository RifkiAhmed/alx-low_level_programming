#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *head = NULL;
	unsigned short int node1 = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			if (!node1)
				printf(", ");
			head = ht->array[index];
			while (head)
			{
				printf("'%s': '%s'", head->key, head->value);
				node1 = 0;
				head = head->next;
			}
			head = NULL;
		}
	}
	printf("}\n");
}
