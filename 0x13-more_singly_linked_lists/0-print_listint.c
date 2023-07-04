#include "lists.h"
#include <stdio.h>

/*
 * print_listint - prints all the elements of a listint_t list
 * @h: points to head of list
 *
 * Return: no. of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_of_list = 0;

		while (h)
		{
			node_of_list++;
			printf("%d\n", h->n);
			h = h->next;
		}

	return (node_of_list);
}
