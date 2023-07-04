#include "lists.h"

/**
 * sum_listint - calcs sum of data
 * @head: points to head
 *
 * Return: Empty(0) else sum
 */

int sum_listint(listint_t *head)
{
	int sum_of_data = 0;

	while (head)
	{
		sum_of_data += head->n;
		head = head->next;
	}

	return (sum_of_data);
}
