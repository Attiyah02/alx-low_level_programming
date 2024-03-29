#include "lists.h"

/**
 * free_listint - frees the list
 * @head: ponts to head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
