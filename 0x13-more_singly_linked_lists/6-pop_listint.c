#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head of a listint_t list
 * @head: head of listint_t list
 *
 * Return: head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
