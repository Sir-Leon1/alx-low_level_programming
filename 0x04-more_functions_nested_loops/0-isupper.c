#include "main.h"

/**
 * _isupper - Check for uppercase characters
 * @c: The character to be checked
 *
 * Return: 1 If character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
