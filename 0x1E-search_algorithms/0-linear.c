#include "search_algos.h"

/**
 * linear-search - Searches for a value in an array using linear search
 * @array: A pointer to the first element of the array to search
 * @size: Number of elements in the array.
 * @value: The value to search for
 *
 * Return: If the value is not present or array is NULL, -1
 * Otherwise., first index where value is located
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
