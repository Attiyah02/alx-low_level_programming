#include "lists.h"

/**
 * add_nodeint - adds new node
 * @head: pointer to address
 * @n: integer for new node
 *
 * Return: Null(fails) else address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
