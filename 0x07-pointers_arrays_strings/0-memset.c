#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed
 * to by @s with constant character @c
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the area with
 * @n: Number of bytes to replace
 *
 * Return: A pointer to a filled memory area @s
 */

char *_memset(char *s, int b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
