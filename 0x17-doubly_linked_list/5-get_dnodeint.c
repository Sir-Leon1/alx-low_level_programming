#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a list
 * @head: The head of the list
 * @index: The node to locate
 *
 * Return: If the node does not exist - NULL
 * otherwise Address of located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
