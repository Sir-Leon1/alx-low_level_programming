#include "main.h"

/**
 * _strpbrk - Seraches a sring for any of a set of bytes
 * @s: The string
 * @accept: Set of bytes to be searched for
 *
 * Return: If a set is matched - Pointer.
 * else NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
