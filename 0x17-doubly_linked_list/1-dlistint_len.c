#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a dlistint_t list
 * @h: The head to the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
