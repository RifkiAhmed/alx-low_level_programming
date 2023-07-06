#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: pointer to hash table or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr;

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
