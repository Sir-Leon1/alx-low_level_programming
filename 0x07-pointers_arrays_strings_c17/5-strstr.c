#include "main.h"

/**
 * _strstr - Finds the first occurance of needle in haystack
 * @needle: The string we are searhing for
 * @haystack: Where to search
 *
 * Return: Pointer to located substring else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
