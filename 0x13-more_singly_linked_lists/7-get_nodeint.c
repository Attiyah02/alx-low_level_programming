#include "lists.h"

/**
 * get_nodeint_at_index - locates node
 * @head: points to node
 * @index: index of location
 *
 * Return: Null(fail) else locate node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeloc;

	for (nodeloc = 0; nodeloc < index; nodeloc++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
