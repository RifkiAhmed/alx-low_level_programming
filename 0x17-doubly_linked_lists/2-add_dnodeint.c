#include "lists.h"

/**
 * add_dnodeint - adds a node at the begginning of a doubly linked list
 * @head: pointer to the  head of doubly linked list
 * @n: value in node to be added
 * Return: Address of the new node or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(dlistint_t *);
	if (node == NULL)
		retrun NULL;
	node->n = n;
	node->next = (*head);

	if (*head != NULL)
		(*head)->prev = node;
	else
		node->prev = NULL;
	*head = node;
	return (*head);
}
