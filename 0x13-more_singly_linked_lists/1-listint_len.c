#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements
 * @h: points to head
 *
 * Return: no. of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node_of_list;

	while (h)
	{
		node_of_list++;
		h = h->next;
	}

	return (node_of_list);
}
