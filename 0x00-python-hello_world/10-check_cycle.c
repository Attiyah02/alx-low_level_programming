#include "lists.h"

/**
 * check_cycle - function checks if list has cycle or not
 * @list: points to start of node
 * Return: 0 if no cycle else 1
 */

int check_cycle(listint_t *list)
{
	listint_t *current, *chk;

	if (list == NULL || list->next == NULL)
		return (0);
	current = list;
	chk = current->next;

	while (current != NULL && chk->next != NULL
		&& chk->next->next != NULL)
	{
		if (current == chk)
			return (1);
		current = current->next;
		chk = chk->next->next;
	}
	return (0);
}
