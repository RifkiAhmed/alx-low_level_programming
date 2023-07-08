#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of array
 *
 * Return: pointer to sorted hash table or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * sorted_dllist - inserts element in a sorted doubly linked list
 * @ht: pointer to sorted hash table
 * @head: pointer to head of doubly linked list
 */
void sorted_dllist(shash_table_t *ht, shash_node_t *head)
{
	shash_node_t *prev = NULL;
	shash_node_t *current = ht->shead;

	if (ht->shead == NULL)
	{
		head->sprev = NULL;
		head->snext = NULL;
		ht->shead = head;
		ht->stail = head;
		return;
	}
	if (strcmp(head->key, ht->shead->key) <= 0)
	{
		head->sprev = NULL;
		head->snext = ht->shead;
		ht->shead->sprev = head;
		ht->shead = head;
		return;
	}

	do {
		prev = current;
		current = current->snext;
	} while (current && strcmp(current->key, head->key) < 0);
	prev->snext = head;
	head->sprev = prev;
	head->snext = current;
	if (current)
		current->sprev = head;
	else
		ht->stail = head;
}
/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: pointer to sorted hash table
 * @key: key of node
 * @value: value of node
 *
 * Return: 1 else 0 if it fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *head = NULL;
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
	head = malloc(sizeof(shash_node_t));
	if (head == NULL)
		return (0);
	head->key = strdup(key);
	head->value = strdup(value);
	head->next = ht->array[index];
	ht->array[index] = head;
	sorted_dllist(ht, head);
	return (1);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head = NULL;
	unsigned short int node1 = 1;

	if (ht == NULL)
		return;
	printf("{");
	head = ht->shead;
	while (head)
	{
		if (!node1)
			printf(", ");
		printf("'%s': '%s'", head->key, head->value);
		node1 = 0;
		head = head->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: pointer to hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail = NULL;
	unsigned short int node1 = 1;

	if (ht == NULL)
		return;
	printf("{");
	tail = ht->stail;
	while (tail)
	{
		if (!node1)
			printf(", ");
		printf("'%s': '%s'", tail->key, tail->value);
		node1 = 0;
		tail = tail->sprev;
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *prev = NULL;

	if (ht == NULL)
		return;
	while (ht->stail)
	{
		prev = ht->stail->sprev;
		free(ht->stail->key);
		free(ht->stail->value);
		free(ht->stail);
		ht->stail = prev;
	}
	free(ht->array);
	free(ht);
}
#include "hash_tables.h"

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key of element
 *
 * Return: value of  @key or NULL if it fails
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node = NULL;

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
