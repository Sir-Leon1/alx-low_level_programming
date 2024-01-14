#include "main.h"

/**
 * swap_int - Swaps the values of to pointers
 * @a: First value
 * @b: Second value
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int hold = *a;

	*a = *b;
	*b = hold;
}
