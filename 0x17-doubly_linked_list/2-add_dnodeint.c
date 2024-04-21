#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list
 * @head: A pointer to the head of the list
 * @n: The int to be added
 *
 * Return: On fail _ NULL
 * otherwise - Address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof()dlistint_t);
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
