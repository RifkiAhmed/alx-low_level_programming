#include "lists.h"

/**
 * sum_dlistint - retruns sum of all elements in a doubly linked list
 * @head: pointer to the  head of doubly linked list
 *
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
