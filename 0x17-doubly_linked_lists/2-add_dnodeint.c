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

	if (*head == NULL)
	{
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}
	node = malloc(dlistint_t *);
	node->n = n;
	node->next = (*head);
	(*head)->prev = node;
	*head = node;
	return (*head);
}
