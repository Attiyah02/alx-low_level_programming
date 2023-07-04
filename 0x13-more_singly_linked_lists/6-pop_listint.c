#include "lists.h"

/**
 * pop_listint - deletes head
 * @head: points to address
 *
 * Return: Empty(0) else head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int full;

	if (*head == NULL)
		return (0);

	temp = *head;
	full = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (full);
}
