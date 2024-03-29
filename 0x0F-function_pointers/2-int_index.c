#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array to be searched
 * @size: The size of the array
 * @cmp: Function used to compare values
 *
 * Return: Index of the first element for which cmp
 * does not return 0 and -1 if no element matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
