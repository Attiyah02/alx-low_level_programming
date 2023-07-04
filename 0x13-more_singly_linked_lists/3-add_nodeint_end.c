#include "lists.h"

/**
 * add_nodeint_end - adds new node at end
 * @head: pointer to address
 * @n: integer
 *
 * Return: Null(fail) else address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *lastone;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		lastone = *head;
		while (lastone->next != NULL)
			lastone = lastone->next;
		lastone->next = new;
	}

	return (*head);
}
