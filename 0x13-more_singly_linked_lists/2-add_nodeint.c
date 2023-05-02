#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function adds a new element at the biginning of listint_t list
 * @head: header of listint_t list
 * @n: number to add
 *
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	if (*head == NULL)
		return (NULL);
	return (*head);
}
