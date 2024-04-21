#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - Doubly linked list
 * @n: Integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint_t(const dlistint_t *h);
size_t dlistint_t(dlistint *h);

#endif /*LISTS_H*/
