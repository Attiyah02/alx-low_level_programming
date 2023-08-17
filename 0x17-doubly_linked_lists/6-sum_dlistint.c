#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in list
 * @head: head of the list
 *
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_of_data;

	sum_of_data = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_of_data += head->n;
			head = head->next;
		}
	}

	return (sum_of_data);
}
