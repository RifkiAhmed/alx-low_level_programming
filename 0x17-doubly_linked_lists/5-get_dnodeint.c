#include "lists.h"

/**
 * get_dnodeint_at_index - retrun node at a given index in doubly linked list
 * @head: pointer to the  head of doubly linked list
 * @index: index of node to return
 *
 * Return: node or NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp->next)
	{
		if (index == count)
			return (temp);
		temp = temp->next;
		count++;
	}
	if (index == count)
		return (temp);
	return (NULL);
}
