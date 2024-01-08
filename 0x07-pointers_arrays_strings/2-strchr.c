#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string
 * @c: The character
 *
 * Return:  A pointer to the character
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return (NULL);
}

