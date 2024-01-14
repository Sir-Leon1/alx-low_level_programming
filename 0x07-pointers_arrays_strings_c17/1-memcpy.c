#include "main.h"

/**
 * _memcpy - Copies n bytes from src to @dest
 *
 * @dest: Pointer to the dstinantion of the new string
 * @src: Pointer to the source string to be copied
 * @n: Number of byter to copy
 *
 * Return: Pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *new = dest, *old = src;
	unsigned int index;

	for (index = 0; index < n; index++)
		new[index] = old[index];

	return (new);
}
