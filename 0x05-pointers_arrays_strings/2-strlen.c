#include "main.h"

/**
 * _strlen - Finds the length of a string
 * @s: The string
 *
 * Return: The length
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s; len++)
		s++;

	return (len);
}
